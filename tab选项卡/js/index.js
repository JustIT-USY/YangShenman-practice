windom.onload=function(){
    var allLis=$('tad_header').getElementsByIagName('li');
    var allLis=$('tad_content').getElementsByClassName('dom');
    // console.log(allLis.allDom);
    for(var i=0;i<allLis.length;i++){
        var li=allLis[i];
        li.index=i;
        li.onmouseover=function(){
            this.className='seleted';
            for(var i=0;j<allLis.length;j++){
                li=allLis[j].className='';
                allDom[j].style.display='none';
            }
           this. className='selected';
            allDom[this.index].style.display='block';
    }
    }
}
function $(id){
    return typeof id==="string"? document.getElementById(id):null;
}