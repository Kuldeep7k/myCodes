Module Module1

    Sub Main()
        Dim a, b, c As Integer
        Dim x As Boolean
        Console.WriteLine("Enter a")
        a = Console.ReadLine()
        Console.WriteLine("Enter a")
        b = Console.ReadLine()
        x = (a < b) And (b < a)
        Console.WriteLine("And {0}", x)
        x = (a > b) Or (b < a)
        Console.WriteLine("or {0}", x)
        x = Not (a * b)
        Console.WriteLine("not {0}", x)
        x = a > 10 Xor b < 20
        Console.WriteLine("xor {0}", x)


    End Sub

End Module

