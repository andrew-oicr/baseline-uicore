<!--{% assign nav = site._modules | where:"slug", "nav" | first %}-->

<!--
<nav id="sticky-nav" class="navbar nav-main navbar-no-border">Navbar here!
</nav>-->


    <nav id="sticky-nav" class="navbar navbar-inverse"><div class="container-fluid">
        <div class="navbar-header">
            <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#myNav">
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
            </button>
            <a id="nav-header-thing" class="navbar-brand" href="#">Andrew Chin</a>
        </div>
        
        <div class="collapse navbar-collapse" id="myNav">
            <ul class="nav navbar-nav" >
                {% assign sorted_pages = (site._andrew | sort: 'index_ti') %}
                {% for main-page in sorted_pages %}
                <li><a href="{{main-page.permalink}}">{{main-page.title}}</a></li>
                {% endfor %}
            </ul>
        </div></div>
    </nav>
