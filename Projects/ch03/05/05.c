#include <stdio.h>
int main(void)
{
    // Prompt the user to enter the numbers
    int none, ntwo, nthree, nfour, nfive, nsix, nseven, neight, nnine, nten, neleven, ntwelve, nthirteen, nfourteen, nfifteen, nsixteen;
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &none, &ntwo, &nthree, &nfour, &nfive, &nsix, &nseven, &neight, &nnine, &nten, &neleven, &ntwelve, &nthirteen, &nfourteen, &nfifteen, &nsixteen);
    
    // Print the numbers in a 4 by 4
    printf("%3d %3d %3d %3d\n"
    "%3d %3d %3d %3d\n"
    "%3d %3d %3d %3d\n"
    "%3d %3d %3d %3d\n",
    none, ntwo, nthree, nfour, nfive, nsix, nseven, neight, nnine, nten, neleven, ntwelve, nthirteen, nfourteen, nfifteen, nsixteen
    );

    // Display the row sums
    printf("Row sums: %d %d %d %d\n",
    none + ntwo + nthree + nfour,
    nfive + nsix + nseven + neight,
    nnine + nten + neleven + ntwelve,
    nthirteen + nfourteen + nfifteen + nsixteen
    );

    // Display Column sums
    printf("Column sums: %d %d %d %d\n",
    none + nfive + nnine + nthirteen,
    ntwo + nsix + nten + nfourteen,
    nthree + nseven + neleven + nfifteen,
    nfour + neight + ntwelve + nsixteen
    );

    // Display Diagonal sums
    printf("Diagonal sums: %d %d\n",
    none + nsix + neleven + nsixteen,
    nfour + nseven + nten + nthirteen
    );

}