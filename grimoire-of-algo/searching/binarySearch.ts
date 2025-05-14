function binSearch(arr: number[], target: number): boolean{
    let hi = arr.length;
    let lo = 0;

    do{
        const m = (lo+hi)/2;
        const v = arr[m];
        if(target===m){
            return true;
        } else if(v<target){
            lo=m+1;
        } else{
            hi=m;
        }
    } while(lo<hi);

    return false;
 
}