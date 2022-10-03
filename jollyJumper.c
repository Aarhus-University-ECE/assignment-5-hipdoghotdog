#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>



bool isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/
    bool diffs_found[size];
    int diff;
    int a;
    for(int i=0; i < size; i++) {
        diffs_found[i] = false;
    }


    for(int i=0; i < size - 1; i++){
        int diff = seq[i] - seq[i+1];
        if (diff < 0){
            diff = -1 * diff;
        }

        if (0 < diff && diff < size && diffs_found[diff] == false){
            diffs_found[diff] = true;
        }
        else{
            return false;
        }

    }



    return true;
}

