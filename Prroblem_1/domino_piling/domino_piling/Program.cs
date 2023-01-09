// See https://aka.ms/new-console-template for more information


int noOfDominos(int m,int n)
{
    int count = 0;
    count = m / 2 * n;
    if (m % 2 != 0)
    {
        count = count + n / 2;

    }
   
    return count;
}

var line = Console.ReadLine();
var numbers = line.Split(' ');
int n1=Convert.ToInt32(numbers[0]);

int n2 = Convert.ToInt32(numbers[1]);
Console.WriteLine(
noOfDominos(n1, n2)
);





