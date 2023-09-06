# Find the fine
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of penalties <strong>fine[]</strong>, an array of car numbers <strong>car[]</strong>, and also the <strong>date</strong>. The task is to find the total fine which will be collected on the given date. Fine is collected from odd-numbered cars on even dates and vice versa.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4, date = 12
car[] = {2375, 7682, 2325, 2352}
fine[] = {250, 500, 350, 200}
<strong>Output:</strong>
600
<strong>Explantion:</strong>
The date is 12 (even), so we collect the
fine from odd numbered cars. The odd
numbered cars and the fines associated
with them are as follows:
2375 -&gt; 250
2325 -&gt; 350
The sum of the fines is 250+350 = 600</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3, date = 8
car[] = {2222, 2223, 2224}
fine[] = {200, 300, 400}
<strong>Output:</strong>
300</span></pre>

<p><br>
<br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>totalFine()</strong>&nbsp;which takes the array <strong>car[]</strong> and <strong>fine[]</strong> its size <strong>N</strong><strong> </strong>and an integer<strong> date </strong>as inputs and returns the total fine.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= Car<sub>i</sub> &lt;= 10<sup>5</sup><br>
1 &lt;= Date &lt;= 10<sup>5</sup><br>
1 &lt;= Fine<sub>i</sub> &lt;= 10<sup>5</sup></span></p>
</div>