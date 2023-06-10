<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (1.8.0_282) on Fri Feb 25 08:50:52 UTC 2022 -->
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>X509Exception (Apache ZooKeeper - Server 3.8.0 API)</title>
<meta name="date" content="2022-02-25">
<link rel="stylesheet" type="text/css" href="../../../../stylesheet.css" title="Style">
<script type="text/javascript" src="../../../../script.js"></script>
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="X509Exception (Apache ZooKeeper - Server 3.8.0 API)";
        }
    }
    catch(err) {
    }
//-->
</script>
<noscript>
<div>JavaScript is disabled on your browser.</div>
</noscript>
<!-- ========= START OF TOP NAVBAR ======= -->
<div class="topNav"><a name="navbar.top">
<!--   -->
</a>
<div class="skipNav"><a href="#skip.navbar.top" title="Skip navigation links">Skip navigation links</a></div>
<a name="navbar.top.firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/X509Exception.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/zookeeper/common/Time.html" title="class in org.apache.zookeeper.common"><span class="typeNameLink">Prev&nbsp;Class</span></a></li>
<li><a href="../../../../org/apache/zookeeper/common/X509Exception.KeyManagerException.html" title="class in org.apache.zookeeper.common"><span class="typeNameLink">Next&nbsp;Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/zookeeper/common/X509Exception.html" target="_top">Frames</a></li>
<li><a href="X509Exception.html" target="_top">No&nbsp;Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../allclasses-noframe.html">All&nbsp;Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_top");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li><a href="#nested.class.summary">Nested</a>&nbsp;|&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#methods.inherited.from.class.java.lang.Throwable">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.detail">Constr</a>&nbsp;|&nbsp;</li>
<li>Method</li>
</ul>
</div>
<a name="skip.navbar.top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<!-- ======== START OF CLASS DATA ======== -->
<div class="header">
<div class="subTitle">org.apache.zookeeper.common</div>
<h2 title="Class X509Exception" class="title">Class X509Exception</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true" title="class or interface in java.lang">java.lang.Throwable</a></li>
<li>
<ul class="inheritance">
<li><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Exception.html?is-external=true" title="class or interface in java.lang">java.lang.Exception</a></li>
<li>
<ul class="inheritance">
<li>org.apache.zookeeper.common.X509Exception</li>
</ul>
</li>
</ul>
</li>
</ul>
</li>
</ul>
<div class="description">
<ul class="blockList">
<li class="blockList">
<dl>
<dt>All Implemented Interfaces:</dt>
<dd><a href="https://docs.oracle.com/javase/8/docs/api/java/io/Serializable.html?is-external=true" title="class or interface in java.io">Serializable</a></dd>
</dl>
<dl>
<dt>Direct Known Subclasses:</dt>
<dd><a href="../../../../org/apache/zookeeper/common/X509Exception.KeyManagerException.html" title="class in org.apache.zookeeper.common">X509Exception.KeyManagerException</a>, <a href="../../../../org/apache/zookeeper/common/X509Exception.SSLContextException.html" title="class in org.apache.zookeeper.common">X509Exception.SSLContextException</a>, <a href="../../../../org/apache/zookeeper/common/X509Exception.TrustManagerException.html" title="class in org.apache.zookeeper.common">X509Exception.TrustManagerException</a></dd>
</dl>
<hr>
<br>
<pre>public class <span class="typeNameLabel">X509Exception</span>
extends <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Exception.html?is-external=true" title="class or interface in java.lang">Exception</a></pre>
<dl>
<dt><span class="seeLabel">See Also:</span></dt>
<dd><a href="../../../../serialized-form.html#org.apache.zookeeper.common.X509Exception">Serialized Form</a></dd>
</dl>
</li>
</ul>
</div>
<div class="summary">
<ul class="blockList">
<li class="blockList">
<!-- ======== NESTED CLASS SUMMARY ======== -->
<ul class="blockList">
<li class="blockList"><a name="nested.class.summary">
<!--   -->
</a>
<h3>Nested Class Summary</h3>
<table class="memberSummary" border="0" cellpadding="3" cellspacing="0" summary="Nested Class Summary table, listing nested classes, and an explanation">
<caption><span>Nested Classes</span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Class and Description</th>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static class&nbsp;</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/common/X509Exception.KeyManagerException.html" title="class in org.apache.zookeeper.common">X509Exception.KeyManagerException</a></span></code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static class&nbsp;</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/common/X509Exception.SSLContextException.html" title="class in org.apache.zookeeper.common">X509Exception.SSLContextException</a></span></code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static class&nbsp;</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/common/X509Exception.TrustManagerException.html" title="class in org.apache.zookeeper.common">X509Exception.TrustManagerException</a></span></code>&nbsp;</td>
</tr>
</table>
</li>
</ul>
<!-- ======== CONSTRUCTOR SUMMARY ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor.summary">
<!--   -->
</a>
<h3>Constructor Summary</h3>
<table class="memberSummary" border="0" cellpadding="3" cellspacing="0" summary="Constructor Summary table, listing constructors, and an explanation">
<caption><span>Constructors</span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tr class="altColor">
<td class="colOne"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/common/X509Exception.html#X509Exception-java.lang.String-">X509Exception</a></span>(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;message)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colOne"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/common/X509Exception.html#X509Exception-java.lang.String-java.lang.Throwable-">X509Exception</a></span>(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;message,
             <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true" title="class or interface in java.lang">Throwable</a>&nbsp;cause)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colOne"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/common/X509Exception.html#X509Exception-java.lang.Throwable-">X509Exception</a></span>(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true" title="class or interface in java.lang">Throwable</a>&nbsp;cause)</code>&nbsp;</td>
</tr>
</table>
</li>
</ul>
<!-- ========== METHOD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="method.summary">
<!--   -->
</a>
<h3>Method Summary</h3>
<ul class="blockList">
<li class="blockList"><a name="methods.inherited.from.class.java.lang.Throwable">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true" title="class or interface in java.lang">Throwable</a></h3>
<code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#addSuppressed-java.lang.Throwable-" title="class or interface in java.lang">addSuppressed</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#fillInStackTrace--" title="class or interface in java.lang">fillInStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#getCause--" title="class or interface in java.lang">getCause</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#getLocalizedMessage--" title="class or interface in java.lang">getLocalizedMessage</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#getMessage--" title="class or interface in java.lang">getMessage</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#getStackTrace--" title="class or interface in java.lang">getStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#getSuppressed--" title="class or interface in java.lang">getSuppressed</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#initCause-java.lang.Throwable-" title="class or interface in java.lang">initCause</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#printStackTrace--" title="class or interface in java.lang">printStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#printStackTrace-java.io.PrintStream-" title="class or interface in java.lang">printStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#printStackTrace-java.io.PrintWriter-" title="class or interface in java.lang">printStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#setStackTrace-java.lang.StackTraceElement:A-" title="class or interface in java.lang">setStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#toString--" title="class or interface in java.lang">toString</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="methods.inherited.from.class.java.lang.Object">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></h3>
<code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#clone--" title="class or interface in java.lang">clone</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#equals-java.lang.Object-" title="class or interface in java.lang">equals</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#finalize--" title="class or interface in java.lang">finalize</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#getClass--" title="class or interface in java.lang">getClass</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#hashCode--" title="class or interface in java.lang">hashCode</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#notify--" title="class or interface in java.lang">notify</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#notifyAll--" title="class or interface in java.lang">notifyAll</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait--" title="class or interface in java.lang">wait</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait-long-" title="class or interface in java.lang">wait</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait-long-int-" title="class or interface in java.lang">wait</a></code></li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
<div class="details">
<ul class="blockList">
<li class="blockList">
<!-- ========= CONSTRUCTOR DETAIL ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor.detail">
<!--   -->
</a>
<h3>Constructor Detail</h3>
<a name="X509Exception-java.lang.String-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>X509Exception</h4>
<pre>public&nbsp;X509Exception(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;message)</pre>
</li>
</ul>
<a name="X509Exception-java.lang.Throwable-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>X509Exception</h4>
<pre>public&nbsp;X509Exception(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true" title="class or interface in java.lang">Throwable</a>&nbsp;cause)</pre>
</li>
</ul>
<a name="X509Exception-java.lang.String-java.lang.Throwable-">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>X509Exception</h4>
<pre>public&nbsp;X509Exception(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;message,
                     <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true" title="class or interface in java.lang">Throwable</a>&nbsp;cause)</pre>
</li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
</div>
<!-- ========= END OF CLASS DATA ========= -->
<!-- ======= START OF BOTTOM NAVBAR ====== -->
<div class="bottomNav"><a name="navbar.bottom">
<!--   -->
</a>
<div class="skipNav"><a href="#skip.navbar.bottom" title="Skip navigation links">Skip navigation links</a></div>
<a name="navbar.bottom.firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/X509Exception.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/zookeeper/common/Time.html" title="class in org.apache.zookeeper.common"><span class="typeNameLink">Prev&nbsp;Class</span></a></li>
<li><a href="../../../../org/apache/zookeeper/common/X509Exception.KeyManagerException.html" title="class in org.apache.zookeeper.common"><span class="typeNameLink">Next&nbsp;Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/zookeeper/common/X509Exception.html" target="_top">Frames</a></li>
<li><a href="X509Exception.html" target="_top">No&nbsp;Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../allclasses-noframe.html">All&nbsp;Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_bottom");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li><a href="#nested.class.summary">Nested</a>&nbsp;|&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#methods.inherited.from.class.java.lang.Throwable">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.detail">Constr</a>&nbsp;|&nbsp;</li>
<li>Method</li>
</ul>
</div>
<a name="skip.navbar.bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small>Copyright &#169; 2008&#x2013;2022 <a href="https://www.apache.org/">The Apache Software Foundation</a>. All rights reserved.</small></p>
</body>
</html>
