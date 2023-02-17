<h2><a href="https://leetcode.com/problems/largest-odd-number-in-string/">1903. Largest Odd Number in String</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">num</code>, representing a large integer. Return <em style="user-select: auto;">the <strong style="user-select: auto;">largest-valued odd</strong> integer (as a string) that is a <strong style="user-select: auto;">non-empty substring</strong> of </em><code style="user-select: auto;">num</code><em style="user-select: auto;">, or an empty string </em><code style="user-select: auto;">""</code><em style="user-select: auto;"> if no odd integer exists</em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters within a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = "52"
<strong style="user-select: auto;">Output:</strong> "5"
<strong style="user-select: auto;">Explanation:</strong> The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = "4206"
<strong style="user-select: auto;">Output:</strong> ""
<strong style="user-select: auto;">Explanation:</strong> There are no odd numbers in "4206".
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = "35427"
<strong style="user-select: auto;">Output:</strong> "35427"
<strong style="user-select: auto;">Explanation:</strong> "35427" is already an odd number.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= num.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">num</code> only consists of digits and does not contain any leading zeros.</li>
</ul>
</div>