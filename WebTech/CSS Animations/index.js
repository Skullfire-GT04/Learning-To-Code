for(let i = 1; i <= 10; i++){
    for(let j = 1; j <= 10; j++){
        let div = document.createElement('div');
        div.classList.add('hover-card');
        hover.appendChild(div);

        div.addEventListener("mouseover", () => {
            let index = (i - 1) * 10 + (j -  1);
            let n = hover.children.length;
            if(index - 1 >= 0){
                hover.children[index - 1].style.borderRight = `solid 1px rgb(100, 100, 100)`;
                hover.children[index - 1].style.borderTop = `solid 1px rgb(100, 100, 100)`;
                hover.children[index - 1].style.borderBottom = `solid 1px rgb(100, 100, 100)`;
            }
            if(index + 1 < n){
                hover.children[index + 1].style.borderLeft = `solid 1px rgb(100, 100, 100)`;
                hover.children[index + 1].style.borderTop = `solid 1px rgb(100, 100, 100)`;
                hover.children[index + 1].style.borderBottom = `solid 1px rgb(100, 100, 100)`;
            }
            if(index - 10 >= 0){
                hover.children[index - 10].style.borderLeft = `solid 1px rgb(100, 100, 100)`;
                hover.children[index - 10].style.borderRight = `solid 1px rgb(100, 100, 100)`;
                hover.children[index - 10].style.borderBottom = `solid 1px rgb(100, 100, 100)`;
            }
            if(index + 10 < n){
                hover.children[index + 10].style.borderLeft = `solid 1px rgb(100, 100, 100)`;
                hover.children[index + 10].style.borderRight = `solid 1px rgb(100, 100, 100)`;
                hover.children[index + 10].style.borderTop = `solid 1px rgb(100, 100, 100)`;
            }
        })

        div.addEventListener("mouseout", () => {
            let index = (i - 1) * 10 + (j -  1);
            let n = hover.children.length;
            if(index - 1 >= 0){
                hover.children[index - 1].style.borderRight = `solid 1px rgb(222, 222, 222)`;
                hover.children[index - 1].style.borderTop = `solid 1px rgb(222, 222, 222)`;
                hover.children[index - 1].style.borderBottom = `solid 1px rgb(222, 222, 222)`;
            }
            if(index + 1 < n){
                hover.children[index + 1].style.borderLeft = `solid 1px rgb(222, 222, 222)`;
                hover.children[index + 1].style.borderTop = `solid 1px rgb(222, 222, 222)`;
                hover.children[index + 1].style.borderBottom = `solid 1px rgb(222, 222, 222)`;
            }
            if(index - 10 >= 0){
                hover.children[index - 10].style.borderLeft = `solid 1px rgb(222, 222, 222)`;
                hover.children[index - 10].style.borderRight = `solid 1px rgb(222, 222, 222)`;
                hover.children[index - 10].style.borderBottom = `solid 1px rgb(222, 222, 222)`;
            }
            if(index + 10 < n){
                hover.children[index + 10].style.borderLeft = `solid 1px rgb(222, 222, 222)`;
                hover.children[index + 10].style.borderRight = `solid 1px rgb(222, 222, 222)`;
                hover.children[index + 10].style.borderTop = `solid 1px rgb(222, 222, 222)`;
            }
        })
    }
}

const frame = () => {
    let index = Math.floor(Math.random() * 100);
    hover.children[index].classList.toggle("flip-card");
    setTimeout(frame, 1000 / 6);

}


setTimeout(frame, 1000 / 6);