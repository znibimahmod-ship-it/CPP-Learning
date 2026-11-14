1} Omitting name space (NO std::) ->  #include <iostream>

2} New line -> "text\n" or <<endl;

3} Comments: //  or /* text */

4} Escape Sequence:

1) \\ -> \   4)   \t -> tab

2) \" -> "   5)  \a -> audio bell

3) \' ->'                                    

5} TYPE :  
int myNumber = 52;                 // Integer (whole number without decimals)

float myFloatNumber = 7.84;        // Floating point number (with decimals)

double myDoubleNumber = 21.8992;   // Large Floating point number.

char myLetter ='M';                // Character

string myText ="Mohammed"          // String (text)

bool myBoolean = true;             // Boolean (true or false)                    
 
6} Declaring  syntax-> type VariableName=value;

7)
🧾 C++ Data Types — Size & Range (Summary)

Integer:
short = 2B (-32k→32k)
int = 4B (-2B→2B)
long long = 8B (~-9e18→9e18)
unsigned = نفس الحجم ×2 في range+

Char:
char = 1B (-128→127)
unsigned char = 0→255

Float:
float = 4B (~3.4e±38, 7 digits)
double = 8B (~1.7e±308, 15 digits)
long double = 12–16B (~1e±4932, 18 digits)

Bool:
bool = 1B (true/false)

💡 sizeof(type) → يعطيك الحجم الحقيقي حسب النظام.
8)+= Add and assign	a += b;
-= Subtract and assign	a -= b;
*= Multiply and assign	a *= b;
/= Divide and assign	a /= b;
%= Modulus and assign	a %= b;
&= Bitwise AND and assign	a &= b;
|= Bitwise OR and assign	a |= b;
^= Bitwise XOR and assign	a ^= b;
<<= Left shift and assign	a <<= b;
>>= Right shift and assign	a >>= b;

9)Greater than ( > )
Less than ( < )
Greater than or equal to ( >= )
Less than or equal to ( <= )
Equal to ( == )
Not equal to ( != )

10) Floor(x):return the greates integer
    Ceiling(x):return the smallest integer
	Round(x):return the nearest integer