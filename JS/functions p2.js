//  map, forEach, filter--------------------------------------
const arr = [1,2,3,4,5];

let nArr = arr.map( (val) => {
    return val*2;
} )

nArr.forEach((val)=>{
    console.log(val);
})

nArr.push(1,3,5,7,9);
console.log(nArr);

let finArr = nArr.filter((val) =>{
    return val%2 !== 0;
})
console.log(finArr);
// Reduce------------------------------------------------------
const arr2 = [1,3,5,7,9];

let total= arr2.reduce( (res, val)=>{
    return res+val;
} )
console.log(total);

let smallest = arr2.reduce((res, val)=>{
    return res<val? res : val;
})
console.log(smallest);

let largest = arr2.reduce((res, val)=>{
    return res>val? res : val;
})
console.log(largest);
// ------------------------------------------------------------
const studentNumber = [45,60,80,90,91,92,93,99,100];

let goldStudents = studentNumber.filter((val)=>{
    return val>90;
})
console.log(goldStudents);
// ------------------------------------------------------------
let n = prompt("Enter a number:");
let arr3=[];
for(let i=1; i<=n; i++){
    arr3.push(i);
}
console.log(arr3);

let arr3Total = arr3.reduce((res,val)=>{
    return res+val;
})
console.log(arr3Total);

let arr3Product = arr3.reduce((res,val)=>{
    return res*val;
})
console.log(arr3Product);
// -----------------------------------------------------------------
let factorial =parseInt(prompt("enter a number to find its factorial:"));
let answer=0;
if(factorial===1||factorial===0){
    console.log(1);
}
else{
    let f=[];
    for(let i=1; i<=factorial; i++){
    f.push(i);
    }
    answer = f.reduce((res, val)=>{
        return res*val;
    })
}
let print= `${factorial} factorial is equal to ${answer}`;
console.log(print);
