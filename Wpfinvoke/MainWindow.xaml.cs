using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using cliwrapper;


namespace Wpfinvoke
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void okclick(object sender, RoutedEventArgs e)
        {
            cliwrapper.wrapper sample;
            sample = new cliwrapper.wrapper();
            double ad = Convert.ToDouble(a.Text);
            double bd = Convert.ToDouble(b.Text);
            double resadd = sample.Add(ad, bd);
            double ressub = sample.Subtract(ad, bd);
            double resmul = sample.Multiply(ad, bd);
            double resdiv = sample.Divide(ad, bd);
            string message = "Add: "+Convert.ToString(resadd)+"\nSubtract: "+ Convert.ToString(ressub)+"\nMultiply: "+ Convert.ToString(resmul) + "\nDivide: " + Convert.ToString(resdiv);
            string caption = sample.Print();
            MessageBoxButton buttons = MessageBoxButton.OK;
            var result=MessageBox.Show(message, caption, buttons);
        }
    }
}
