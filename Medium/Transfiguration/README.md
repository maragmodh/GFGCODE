<h2><a href="https://practice.geeksforgeeks.org/problems/b6b3297ccfb1ad5f66a9c2b92979170417adf114/1?page=3&difficulty[]=1&curated[]=7&sortBy=submissions">Transfiguration</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Professor McGonagall teaches transfiguration at Hogwarts. She has given Harry the task of changing himself into a cat. She explains that the trick is to analyze your own DNA and change it into the DNA&nbsp;of a cat. The transfigure spell can be used to pick any one character from the DNA string, remove it and insert it in the beginning.&nbsp;<br>
Help Harry calculates minimum number of times he needs to use the spell to change himself into a cat.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div class="pieces-code-wrapper" style="text-align: left; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size:18px"><strong>Input: 
</strong>A = "GEEKSFORGEEKS" 
B = "FORGEEKSGEEKS"</span>
<span style="font-size:18px"><strong>Output:</strong> 3</span>
<span style="font-size:18px"><strong>Explanation:</strong>The conversion can take place 
in 3 operations:
1. Pick 'R' and place it at the front, 
&nbsp;  A="RGEEKSFOGEEKS"
2. Pick 'O' and place it at the front, 
&nbsp;  A="ORGEEKSFGEEKS"
3. Pick 'F' and place it at the front, 
&nbsp;  A="FORGEEKSGEEKS"</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; opacity: 0; width: auto; transition: opacity 0.3s ease-out 0s; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy-and-save" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/pieces.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy and Save</span></button><button class="pieces-btn pieces-share" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/link.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Share</span></button></div></div>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div class="pieces-code-wrapper" style="text-align: left; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size:18px"><strong>Input: 
</strong>A = "ABC" 
B = "BCA"</span>
<span style="font-size:18px"><strong>Output:</strong> 2</span>
<span style="font-size:18px"><strong>Explanation:</strong> The conversion can take place 
in 2 operations:
1. Pick 'C' and place it at the front, 
&nbsp;  A = "CAB"
2. Pick 'B' and place it at the front, 
&nbsp;  A = "BCA"</span>
</pre><div class="pieces-btn-wrapper" style="border: none; display: flex; opacity: 0; width: auto; transition: opacity 0.3s ease-out 0s; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy-and-save" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/pieces.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy and Save</span></button><button class="pieces-btn pieces-share" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/link.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Share</span></button></div></div>

<p><span style="font-size:18px"><strong>Your Task: </strong>&nbsp;<br>
You don't need to read input or print anything. Complete the function <strong>transfigure()</strong> which takes strings <strong>A</strong> and <strong>B</strong> as input parameters and returns the minimum number of spells needed. If it is not possible to convert <strong>A</strong> to <strong>B</strong> then return -1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(max(|A|, |B|))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |A|, |B| ≤ 10<sup>5</sup><br>
A and B consists of lowercase and uppercase letters of english alphabet only.</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;