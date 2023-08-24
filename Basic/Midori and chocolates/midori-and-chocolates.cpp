//{ Driver Code Starts
//Initial Template for javascript


'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let [j,L] =  readLine().trim().split(" ").map((x) => parseInt(x));
        let obj = new Solution();
        let res = obj.leftShops(j,L);
        console.log(res);
        
    }
}

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number} i
 * @param {number} L
 * @return {number}
*/

class Solution {

    leftShops(i,L){
        let a = Math.pow(2,L);
        let m = a-i;
        return m;
    }
}