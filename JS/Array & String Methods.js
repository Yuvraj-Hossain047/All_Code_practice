let fullName = prompt("Enter your name for id: ");
let id= `@${fullName}${fullName.length}`;
console.log(id);


let arr= [1,2,3,4,5];
let sum=0;
let sum2=0;

// For OF loop
for(let a of arr){
    sum+=a;
}
console.log("Avg:", sum/arr.length);

// For IN loop, better not to use it for array
for(let a in arr){
    sum2+=arr[a];
}
console.log(`Avg: ${sum2/arr.length}`);


let arr= [250,645,300,900,50];

let i=0;
for(let a of arr){
    arr[i]=a - (a*0.1);
    i++;
}

console.log(arr);

for(let i=0; i<arr.length; i++){
    arr[i] -= arr[i]*0.1;
}
console.log(arr);

let items= ["apple","orange","lichi","banana","avacado"];
let items2=[];
let j=0;
items.push("tomato","dragon fruit","jack-fruit");
console.log(items);

items.splice(5,1);
console.log(items);

for(let i=items.length-1; i>5; i--){
    items2[j]= items[i];
    j++;
    items.pop();
}
console.log("i1",items);
items.pop();
console.log("i1",items);
console.log("i2",items2);
let items3= items.concat(items2);
console.log("i3",items3);
console.log("i3",items3.toString());

let items= ["apple","orange","lichi","banana","avacado"];
items.unshift("mango");
console.log(items);
items.shift();
console.log(items);

let items= ["apple","orange","lichi","banana","avacado"];
let items2= items.slice(1,4);
console.log(items2);

items.splice(3,1, "mango");
console.log(items);

let companies= ["Bloomberg", "Microsoft","Uber","Google","IBM","Netflix"];
console.log(companies);

companies.shift();
console.log(companies);

companies.splice(1,1, "Ola");
console.log(companies);

companies.push("Amazon");
console.log(companies);
