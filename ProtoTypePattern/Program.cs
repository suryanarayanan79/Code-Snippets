using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProtoTypePattern
{
    class Program
    {
        static void Main(string[] args)
        {
            Car acar = new Car("bmw");
            Car acar2 = acar.Clone();
        }
    }
}
