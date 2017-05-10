using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using cliwrapper;

namespace csharpcppinvokesample
{
    class Program
    {
        static void Main(string[] args)
        {
            cliwrapper.wrapper sample;
            sample = new cliwrapper.wrapper();
            Console.WriteLine(sample.Add(1.1, 2.2));
            Console.WriteLine(sample.Subtract(1.1, 2.2));
            Console.WriteLine(sample.Multiply(1.1, 2.2));
            Console.WriteLine(sample.Print());
        }
    }
}
