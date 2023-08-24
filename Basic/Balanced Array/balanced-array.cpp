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
        let n = parseInt(readLine());
        let arr = readLine().trim().split(" ").map((x) => parseInt(x));
        let obj = new Solution();
        let res=obj.minValueToBalance(arr,n);
        console.log(res);
    
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} n
 * @return {number}
*/

class Solution {
    
    minValueToBalance(arr,n){
        let s1 = 0;
    let s2 = 0;
    const n1 = Math.floor(arr.length / 2);

    for (let i = 0; i < n1; ++i) {
        s1 += arr[i];
    }

    for (let i = 2 * n1 - 1; i >= n1; --i) {
        s2 += arr[i];
    }

    return Math.max(Math.abs(s2 - s1), Math.abs(s1 - s2));
    }
}