using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProtoTypePattern
{
   public interface IAutoMobile
    {
       string Name { get; }
       float Speed { get; set; }
       void Accelerate();
       void Break();
       void Horn();
       void StartStopEngine(bool onOff);
    }
}
