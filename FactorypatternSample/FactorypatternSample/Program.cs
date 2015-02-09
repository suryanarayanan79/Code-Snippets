using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using FactorypatternSample.Autos;
using FactorypatternSample.Factory;

namespace FactorypatternSample
{
    class Program
    {
        static void Main(string[] args)
        {
            IAutoFactories bmwfactory = new BMWFactory();
            IAutoFactories MiniCooperFactory = new MiniCooperFactory();
            LoadFactory(bmwfactory);
            LoadFactory(MiniCooperFactory);
        }
        static void LoadFactory(IAutoFactories factoryType ){
            factoryType.CreateAutoMobile();
        }
    }
}
