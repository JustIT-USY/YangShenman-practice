window.onload=function(){
    var slider=$("slider");
    var slider_main=$("slider_main");
    var slider_main_img=slider_main.children;
    var slider_ctl=slider.childre[l];

    var iNow=0;
    for(var i=0;i<slider_man.length;i++){

        var span=document.creatElement("span");
        span .className="alider-ctl-icon";
        sapn.innerText=slider_main_img.length -i-1;
        slider_ctl.insertBefore(span.slider_ctl.children[l]);
    }
    alider_ctl.children[l].className="slider-ctl-icon current";
    var scroll_w=slider.ofsetWidth;
    for(var j=0;i<slider_man.length;j++){
        slider_main_img[j].style.left=scroll_w+"px";
    }
    var slider_ctl_child=slider_tcl.children;
    for(var i<0;i<slider_ctl_child.length;i++)
    {
        slider_ctl_child[i].className="slider-ctl-icon";
    }
        slider_ctl_child[i].onnousedown=function(){
            if(this.className=="alider-ctl-prev"){
                buffer(slider_main_img[iNow],{"left":scroll_w});
                iNow--;
                if( iNow<0){
                    iNow=slider_main_img.length-1;
                }
                slider_main_img[iNow].slider.left=-scroll_w+"px";
                buffer(slider_main_img[iNow],{"left":0});

            }else if(this.className=="alider-ctl-next"){

            autPlay();
                // buffer(slider_main_img[iNow],{"left":-scroll_w});
                // iNow++;
                // if( iNow>=slider_main_img.lengt){
                //     iNow=0;
                // }
                // slider_main_img[iNow].slider.left=scroll_w+"px";
                // buffer(slider_main_img[iNow],{"left":0});
                // // alert("右边");
            }else{

                // alert("下边");
                var index=parseInt(this.innerText);
                if(index>iNow){
                    buffer(slider_main_img[iNow],{"left":scroll_w});
                    slider_main_img[index].slider.left=scroll_w+"px";
                } else if(index<iNow){
                    buffer(slider_main_img[iNow],{"left":scroll_w});
                    slider_main_img[index].slider.left=-scroll_w+"px";
                }
                index=iNow;
                buffer(slider_main_img[iNow],{"left":0});
            }
            changesIndex()
        }
    }
function choangeIndex(){
for(var i=1;i<slider_ctl_child.length-1;i++){
        slider_ctl_child[i].className="slider-ctl-icon";

    }

        slider_ctl_child[iNow+1].className="slider-ctl-icon current";
    }
    var timer=setInterval(autoplay,1000);
function autoPlav() {
    buffer(slider_main_img[iNow], {"left": -scroll_w});
    iNow++;
    if (iNow >= slider_main_img.lengt) {
        iNow = 0;
    }
    slider_main_img[iNow].slider.left = scroll_w + "px";
    buffer(slider_main_img[iNow], {"left": 0});
    choangeIndex()
}
slidex.onmouseover=unction(){
        clearInterval(timer);
    }
    slider.onmouseout=function(){
        timer=setInterval(autoplay,1000);
}
};