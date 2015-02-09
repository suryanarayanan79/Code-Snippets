    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    namespace FactorypatternSample.Autos
    {
        class MiniCooper : IAuto
        {
            public MiniCooper(string name ) {
                System.Console.WriteLine("MiniCooper Intialised");
                Name = name;
            }
            public string Name
            {
                get;
                private set;
            }

            public void SetName(string name)
            {
                if (name == null) throw new ArgumentNullException("name");
                Name = name;
            }

            public void TurnOn()
            {
                System.Console.WriteLine("TuronOn MiniCooper");
            }

            public void TurnOff()
            {
                System.Console.WriteLine("TurnOff MiniCooper");
            }
        }
    }
