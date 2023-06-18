<h2><a href="https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1">Largest square formed in a matrix</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary matrix <strong>mat</strong>&nbsp;of size <strong>n</strong> * <strong>m</strong>, find out the maximum size square sub-matrix with all 1s.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<div class="pieces-code-wrapper" style="text-align: left; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size:18px"><strong>Input:</strong> n = 2, m = 2
mat = {{1, 1}, 
&nbsp;      {1, 1}}
<strong>Output:</strong> 2
<strong>Explaination:</strong> The maximum size of the square
sub-matrix is 2. The matrix itself is the 
maximum sized sub-matrix in this case.</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; opacity: 0; width: auto; transition: opacity 0.3s ease-out 0s; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy-and-save" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/pieces.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy and Save</span></button><button class="pieces-btn pieces-share" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/link.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Share</span></button></div></div>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<div class="pieces-code-wrapper" style="text-align: left; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size:18px"><strong>Input:</strong> n = 2, m = 2
mat = {{0, 0}, 
&nbsp;      {0, 0}}
<strong>Output:</strong> 0
<strong>Explaination:</strong> There is no 1 in the matrix.</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; opacity: 0; width: auto; transition: opacity 0.3s ease-out 0s; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy-and-save" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/pieces.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy and Save</span></button><button class="pieces-btn pieces-share" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/link.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Share</span></button></div></div>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>maxSquare()</strong> which takes n, m and mat as input parameters and returns the size of the maximum square sub-matrix of given matrix.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n*m)<br>
<strong>Expected Auxiliary Space:</strong> O(n*m)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n, m ≤ 50<br>
0 ≤ mat[i][j] ≤ 1&nbsp;</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Samsung</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;