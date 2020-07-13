# include <iostream> 
using namespace std; 
# define NO_OF_CHARS 256 
  
/* Print duplicates present in the passed string */
void printDistinct(char *str) 
{ 
    // Create an array of size 256 and count of 
    // every character in it 
    int count[NO_OF_CHARS]; 
  
    /* Count array with frequency of characters */
    int i; 
    for (i = 0; *(str+i); i++) 
        if(*(str+i)!=' ') 
            count[*(str+i)]++; 
    int n = i; 
  
    // Print characters having count more than 0 
    for (i = 0; i < n; i++) 
        if (count[*(str+i)] == 1) 
            cout<< str[i]; 
} 
  
/* Driver program*/
int main() 
{ 
    char str[] = "GeeksforGeeks"; 
    printDistinct((str); 
    return 0; 
} 