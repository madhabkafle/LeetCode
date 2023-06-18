# Shortest path in Undirected Graph having unit distance
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an Undirected Graph having unit weight, Find the shortest path from src to all the vertex and if it is unreachable to reach any vertex, then return -1 for that vertex.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
n = 9, m= 10
edges=[[0,1],[0,3],[3,4],[4 ,5]
,[5, 6],[1,2],[2,6],[6,7],[7,8],[6,8]] 
src=0
Output:
0 1 2 1 2 3 3 4 4</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to print or input anything. Complete the function <strong style="user-select: auto;">shortest path()&nbsp;</strong>which takes a 2d vector or array <strong style="user-select: auto;">edges</strong> representing the edges of undirected graph with unit weight, an&nbsp;integer<strong style="user-select: auto;"> N </strong>as number nodes, an integer <strong style="user-select: auto;">M</strong> as number of edges&nbsp;and an integer <strong style="user-select: auto;">src&nbsp;</strong>as the input parameters and returns an integer array or vector, denoting&nbsp;<strong style="user-select: auto;">the vector of distance from src to all nodes.</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraint:</strong><br style="user-select: auto;">
1&lt;=n,m&lt;=100<br style="user-select: auto;">
1&lt;=adj[i][j]&lt;=100</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N + E), where N is the number of nodes and E is edges</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Space Complexity: </strong>O(N)</span></p>
</div>