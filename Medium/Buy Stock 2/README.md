<h2><a href="https://practice.geeksforgeeks.org/problems/buy-stock-2/1?page=1&sortBy=submissions&searchQuery=stock">Buy Stock 2</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given the prices of <strong>stock</strong> for <strong>n</strong> number of days. every ith day tell the price of the stock on that day.find the maximum profit that you can make by buying and selling stock any number of times as you can't proceed with other transactions if you hold any transaction.</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<div class="pieces-code-wrapper" style="text-align: left; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size:18px"><strong>Input:</strong>
<code>n = 7
prices = [1,2,3,4,5,6,7]
<strong>Output:</strong>
6
<strong>Explaination:</strong>
We can make the maximum profit by buying the stock on the first day and selling it on the last day.</code></span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; opacity: 0; width: auto; transition: opacity 0.3s ease-out 0s; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy-and-save" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/pieces.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy and Save</span></button><button class="pieces-btn pieces-share" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255); opacity: 1;"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/link.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Share</span></button></div></div>

<p><strong><span style="font-size:18px"><code>Your Task:</code></span></strong><br>
<span style="font-size:18px">You don't have to read input or print anything. Your task is to complete the function <strong>maximizeProfit()&nbsp;</strong>which takes the integer <strong>n</strong> and array prices and returns the maximum profit that can earn.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(n)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(n<sup>2</sup>)<br>
<strong>NOTE: </strong>can you solve this in less space complexity?</span></p>

<p><span style="font-size:18px"><strong>Constraint:</strong><br>
1&lt;=n&lt;=10<sup>5</sup></span><br>
<span style="font-size:18px">1&lt;=prices[i]&lt;=10<sup>5</sup></span></p>
</div>