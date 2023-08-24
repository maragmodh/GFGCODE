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
        let mat = [];
        for(let j = 0;j<n*n;j+=n){
            let row = [];
            for(let k=0;k<n;k++){
                row.push(arr[j+k]);
            }
            mat.push(row);
        }
        let obj = new Solution();
        let res=obj.countZeros(mat,n);
        console.log(res);
    
    }
}

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[][]} A
 * @param {number} N
 * @return {number}
*/

class Solution {

    countZeros(A,N){
        const n = A.length;
    let count = 0;
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            if (A[i][j] === 0) {
                count++;
            }
        }
    }
    return count;
    }
}