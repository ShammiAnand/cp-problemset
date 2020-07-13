//author : Shammi Anand

/////////////////////
// ....X.....
// ....X.....
//     or
// .....X....
// ....X.....
// only two case where it is impossible to finish
/////////////////////

#include <iostream>
using namespace std;

int main(){
	int n, q;
	scanf("%d %d", &n, &q);

    //array of forbidden cells
	bool forbidden[2][n];

    //initially all cells are okay
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++) forbidden[i][j]=false;
	}
    
	int bad_nei = 0;

	for(int k=0;k<q;k++){
		int x,y;
		scanf("%d %d", &x, &y);
		x--;
		y--;

        //checks if curr cell is forbidden
		bool was_forbidden = forbidden[x][y];

        //iterate over all neighbours
		for(int r = x - 1; r <= x + 1; r++) {
            for(int c = y - 1; c <= y + 1; c++) {
                if(r == x) continue;
                //if out of grid, continue.
                if(!(0 <= r && r <= 1 && 0 <= c && c <= n-1)) continue;

                if(forbidden[r][c]){
                    if(was_forbidden) {
                        bad_nei--; //if cell is un-forbidden, dec bad_nei
                    }
                    else{
                        bad_nei++; //else increase it
                    }
                }
            }
        }
        
        // toggle between forbidden and not forbidden
		if(forbidden[x][y]) forbidden[x][y]=false;
		else forbidden[x][y]=true;

        //if more than one bad neighbour
        if(bad_nei >= 1) puts("No");
        else puts("Yes");
	}
	return 0;
}