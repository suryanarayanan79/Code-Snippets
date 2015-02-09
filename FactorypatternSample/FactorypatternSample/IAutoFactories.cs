using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using FactorypatternSample.Autos;

namespace FactorypatternSample.Factory
{
   public interface IAutoFactories
    {
        IAuto CreateAutoMobile();// Factory method
    }
}
