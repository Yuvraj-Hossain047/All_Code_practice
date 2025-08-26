// for loop
for (let i=1; i<5; i++){
    console.log("for loop:", i);
}

// while loop
let w=1;
while(w<5){
    console.log("While loop",w);
    w++;
}

// do while
let d=1;
do{
    console.log("Do-While loop",d);
    d++
}
while(d<5);

// for-of loop
let str = "ED C BA";
let size= 0;
for(let f of str){
    console.log("for of loop", f);
    size++;
}
console.log("string size:", size);

// for-in loop
let classStudent = {
    studentName: "satro",
    age: 19,
    section: "B",
    roll: 16,
    isPass: true
};

for(let n in classStudent){
    console.log("Obj Key: ", n, "key value=", classStudent[n]);
}
