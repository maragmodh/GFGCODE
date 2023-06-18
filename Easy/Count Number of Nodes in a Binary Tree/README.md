<h2><a href="https://practice.geeksforgeeks.org/problems/count-number-of-nodes-in-a-binary-tree/1?page=1&difficulty[]=0&sortBy=accuracy">Count Number of Nodes in a Binary Tree</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p dir="ltr"><span style="font-size:18px">You are given the root of a <strong>complete</strong> binary tree. Your task is to find the <strong>count </strong>of nodes.</span></p>

<p dir="ltr"><span style="font-size:18px">A complete binary tree is a binary tree whose, all levels except the last one are completely filled, the last level may or may not be completely filled and Nodes in the last level are as left as possible.</span></p>

<p dir="ltr"><span style="font-size:18px">Design an algorithm that runs better than O(n).</span></p>

<p dir="ltr"><strong><span style="font-size:18px">Example:</span></strong></p>

<div class="pieces-code-wrapper" style="text-align: left; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size:18px">Input: </span>
<span style="font-size:18px">root = [1,2,3,4,5,6]</span>
<span style="font-size:18px">Output: </span>
<span style="font-size:18px">6</span>
<span style="font-size:18px">Explanation: </span>
<span style="font-size:18px">There are a total of 6 nodes in the given tree.</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; opacity: 0; width: auto; transition: opacity 0.3s ease-out 0s; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy-and-save" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/pieces.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy and Save</span></button><button class="pieces-btn pieces-share" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/link.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Share</span></button></div></div>

<p dir="ltr"><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p dir="ltr"><span style="font-size:18px">Complete the function int cnt_nodes(Node *root), which takes the pointer of the root of the given Binary tree and returns the count of its number of nodes.</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O((LogN)<sup>2</sup>).</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Expected Auxiliary Space:</strong> O(Log N).</span></p>

<p dir="ltr"><strong><span style="font-size:18px">Constraints:</span></strong></p>

<p dir="ltr"><span style="font-size:18px">0 &lt;= N (number of nodes) &lt;= 5 * 10<sup>4</sup>&nbsp;</span></p>

<p dir="ltr"><span style="font-size:18px">0 &lt;= value of nodes&nbsp;&lt;= 5 * 10<sup>4</sup></span></p>

<p dir="ltr"><span style="font-size:18px">The tree is guaranteed to be complete.</span></p>

<p>&nbsp;</p>
</div>