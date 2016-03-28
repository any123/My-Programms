
var str= ["selection","link","image","page"];

for(i=0;i<str.length;i++){
	var abc=str[i];
	var t="Twitter toolkit: Share this "+abc+" on your twitterprofile ";
	chrome.contextMenus.create({title: t,contexts:[abc], onclick: play, id: abc});

}

function play(data,tab){
	switch(data.menuItemId){
	case 'selection' :
	chrome.windows.create({url: "https://twitter.com/intent/tweet?text="+encodeURIComponent(data.selectionText),type: "panel" });
	break;
	
	case 'link' :
	chrome.windows.create({url: "https://twitter.com/intent/tweet?url="+encodeURIComponent(data.linkUrl),type: "panel" });
	break;
	
	case 'image' :
	chrome.windows.create({url: "https://twitter.com/intent/tweet?url="+encodeURIComponent(data.srcUrl),type: "panel" });
	break;
	
	case 'page' :
	chrome.windows.create({url: "https://twitter.com/intent/tweet?text="+encodeURIComponent(tab.title),type: "panel" });
	break;
	}
}
