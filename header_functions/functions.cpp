#include <iterator>

int CalcSum(int x, int y) {
    return x + y;  
}
double CalcSum(double x, double y) {
    return x + y;        
}
void FillFib (uint *arr, int size) {
    for(int i = 0, j = 0; i < size; ++i) {
        if(i == 0 || i == 1)
            arr[i] = i;
        else {
            if(arr[i-1] <=  UINT32_MAX / 2)
                arr[i] = arr[i-1] + arr[i-2];
            else {
                arr[i] = 0;
                break;
            }
        }
    }
}