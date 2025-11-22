#include <stdio.h>
enum months
{
    january=1,februvary,march,april,may,june,july,agust,september,october,november,december

    
};
void main()
{
    enum months m;
    m = may;
    char *season;
    switch (m)
    {
        case december :case january :case februvary :
        season ="winter";break ;
        case march : case april :case may :
        season = "summer";break;
        case june:case july :case agust:
        season ="mansoon"; break;
        case september : case october : case november:
        season = "spring"; break;
    }
        printf("%d is %s",m,season );
 }