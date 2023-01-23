using System;
using System.Collections;
using System.Collections.Generic;
using _pj108.Code.BaseLogic.TimeRemaining;
using Core.Extensions;


namespace _pj108.Code.BaseLogic {
    public static class Controllers{
        static Controllers(){
            _initializeControllers = new List<IStarted>() { };
            _executeControllers = new List<IExecute>{ };
            _disposablesControllers = new List<IDisposable>();
        }

        private static readonly List<IStarted> _initializeControllers;
        private static readonly List<IExecute> _executeControllers;
        private static readonly List<IDisposable> _disposablesControllers;
        
        public static Root RootMonoBehaviour{ get; set; }

        public static void Add(IController controller){
            if (controller is IStarted initializeController){
                Dbg.Log($"Controller |{controller}| added, is type: IInitialisation");
                _initializeControllers.Add(initializeController);
            }

            if (controller is IExecute executeController){
                Dbg.Log($"Controller |{controller}| added, is type: IExecute");
                _executeControllers.Add(executeController);
            }
            
            if (controller is IDisposable disposableController){
                Dbg.Log($"Controller |{controller}| added, is type: IDisposable");
                _disposablesControllers.Add(disposableController);
            }
        }

        public static void Init(){
            for (var index = 0; index < _initializeControllers.Count; ++index)
                _initializeControllers[index].Init();
        }

        public static void Execute(float deltaTime){
            for (var index = 0; index < _executeControllers.Count; ++index){
                if (_executeControllers[index].IsOn)
                    _executeControllers[index].Execute(deltaTime);
            }
        }

        public static void Dispose(){
            for (var index = 0; index < _disposablesControllers.Count; ++index)
                _disposablesControllers[index].Dispose();
        }

        public static void Remove(IController controller){
            _executeControllers.Remove(controller as IExecute);
        }

        public static void StartCoroutine(IEnumerator obj){
            RootMonoBehaviour.StartCoroutine(obj);
        }

        public static void StopAllCoroutines(){
            RootMonoBehaviour.StopAllCoroutines();
        }
    }
}