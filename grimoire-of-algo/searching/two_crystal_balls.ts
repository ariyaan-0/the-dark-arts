function two_crystal_balls(breaks: boolean[]) : number {
    let jmpAmount = Math.floor(Math.sqrt(breaks.length));
    let i = jmpAmount;
    for( ; i<breaks.length; i+=jmpAmount){
        if(breaks[i]){
            break;
        }
    }

    i -= jmpAmount-1;
    for(let j=0; j<jmpAmount && i<breaks.length; j++, i++){
        if(breaks[i]){
            return i;
        }
    }
    return -1;
}

//test-------
const testArr = [
  false, false, false, false, false, false, false, false, false, false, // 0–9
  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  // 10–19
  true,  true,  true,  true,  true                                   // 20–24
];
// expected output 10
console.log(two_crystal_balls(testArr));
