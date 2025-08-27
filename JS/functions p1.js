function toTest(){
    console.log("Functions are working");
}
toTest();
// --------------------------------------------------------
const arrowSs = (a, b) =>{
    console.log(a+b);
}
arrowSs(1,1);
// --------------------------------------------------------
const mul = (a,b) =>{
    console.log(a*b);
}
mul(5,6);
// --------------------------------------------------------
const div = (a,b) =>{
    return a/b;
}
let res= div(20,4);
console.log(res);
// --------------------------------------------------------
function vowelCounter(a){
    let v=0;
    a=a.toLowerCase();

    for(let i of a){
        if(i==="a"||i==="e"||i==="i"||i==="o"||i==="u"){
            v++;
        }
    }
    return v;
}
let str= prompt("give any word:");
let totalVowel= vowelCounter(str);
console.log("number of vowels:", totalVowel);
// --------------------------------------------------------
let arr = [1,2,3];

arr.forEach(function addOne(a){
    let x= a+1;
    console.log(x);
})
// --------------------------------------------------------
let arr2 = [1,2,3,4,5];

// arr2.forEach( (a)=> {
//     let x= a+1;
//     console.log(x);
// })

arr2.forEach( (a,i,ar)=> {
    let x= a+1;
    console.log(x,i,ar);
})
// --------------------------------------------------------
let arr3 = [1, 2, 3];

function addOne(a) {
    let x = a + 1;
    return x;
}

arr3.forEach((a) => {
    console.log(addOne(a));
});
// --------------------------------------------------------
let arrForSqur= [2,3,4,5,6];

function doSquare(a){
    let ans = a*a;
    return ans;
}

arrForSqur.forEach( (a,i)=>{
    console.log(doSquare(a),i);
})
// --------------------------------------------------------
let arrForSqur2= [6,5,4];

let x = (a)=>{
    console.log(a*a);
}
arrForSqur2.forEach(x);
// --------------------------------------------------------
let arrForSqur3= [7,8,9];

arrForSqur3.forEach((x)=>{
    console.log(x*x);
})
