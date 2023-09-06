# Greater on right side
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>Arr&nbsp;</strong>of size <strong>N</strong>. Replace every element with the <strong>next greatest element</strong> (greatest element on its right side) in the array. Also, since there is no element next to the last element, replace it with <strong>-1</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 6
Arr[] = {16, 17, 4, 3, 5, 2}
<strong>Output:</strong>
17 5 5 5 2 -1
<strong>Explanation:</strong> For 16 the greatest element 
on its right is 17. For 17 it's 5. 
For 4 it's 5. For 3 it's 5. For 5 it's 2. 
For 2 it's -1(no element to its right). 
So the answer is 17 5 5 5 2 -1</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
Arr[] = {2, 3, 1, 9}
<strong>Output:</strong>
9 9 9 -1
<strong>Explanation: </strong>For each element except 9 the
greatest element on its right is 9.
So the answer is 9 9 9 -1</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>nextGreatest()</strong>&nbsp;which takes the array of&nbsp;integers&nbsp;<strong>arr&nbsp;</strong>and&nbsp;<strong>n</strong><strong>&nbsp;</strong>as parameters and returns void. You need to change the array itself.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= Arr<sub>i</sub> &lt;= 10<sup>6</sup></span></p>

<p>&nbsp;</p>
</div>