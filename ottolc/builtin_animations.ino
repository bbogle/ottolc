void basic_step(void*){
prependAnimationFrame(90, 90, 90, 90, 200);
prependAnimationFrame(90, 90, 90, 90, 140);
prependAnimationFrame(65, 91, 89, 89, 304);
prependAnimationFrame(60, 30, 60, 60, 200);
prependAnimationFrame(90, 90, 60, 60, 200);
prependAnimationFrame(90, 90, 60, 60, 100);
prependAnimationFrame(90, 120, 60, 60, 100);
prependAnimationFrame(90, 120, 60, 60, 300);
prependAnimationFrame(123, 120, 61, 105, 90);
prependAnimationFrame(138, 120, 61, 105, 98);
prependAnimationFrame(147, 120, 62, 105, 54);
prependAnimationFrame(149, 120, 71, 105, 104);
prependAnimationFrame(145, 115, 103, 105, 160);
prependAnimationFrame(90, 91, 118, 118, 168);
prependAnimationFrame(61, 25, 120, 120, 500);
prependAnimationFrame(60, 25, 90, 90, 70);
prependAnimationFrame(55, 90, 90, 90, 116);
prependAnimationFrame(89, 90, 90, 90, 4);
}

void keep_walking(void*){
    prependAnimationCallback(keep_walking);
    long num = random(0, 8);
    switch(num){
        case 0: prependAnimationCallback(turnleft);break;
        case 1: prependAnimationCallback(turnright);break;
        default:prependAnimationCallback(basic_step);break;
    }
}


void basic_back(void*){
prependAnimationFrame(90, 90, 90, 90, 500);
prependAnimationFrame(90, 90, 90, 90, 140);
prependAnimationFrame(65, 91, 91, 91, 304);
prependAnimationFrame(60, 30, 120, 120, 200);
prependAnimationFrame(90, 90, 120, 120, 200);
prependAnimationFrame(90, 90, 120, 120, 100);
prependAnimationFrame(90, 120, 120, 120, 100);
prependAnimationFrame(90, 120, 120, 120, 300);
prependAnimationFrame(123, 120, 119, 75, 90);
prependAnimationFrame(138, 120, 119, 75, 98);
prependAnimationFrame(147, 120, 118, 75, 54);
prependAnimationFrame(149, 120, 109, 75, 104);
prependAnimationFrame(145, 115, 77, 75, 160);
prependAnimationFrame(90, 91, 62, 62, 168);
prependAnimationFrame(61, 25, 60, 60, 500);
prependAnimationFrame(60, 25, 90, 90, 70);
prependAnimationFrame(55, 90, 90, 90, 116);
prependAnimationFrame(89, 90, 90, 90, 4);
}

void kneel_down(void*){
prependAnimationFrame(90, 90, 90, 90, 626);
prependAnimationFrame(0, 180, 90, 90, 200);
prependAnimationFrame(0, 180, 27, 153, 1000);
prependAnimationFrame(0, 180, 27, 153, 1000);
prependAnimationFrame(0, 180, 27, 153, 400);
prependAnimationFrame(50, 130, 90, 90, 150);
}
void moonwalk_r(void*){
prependAnimationFrame(90, 90, 90, 90, 400);
prependAnimationFrame(145, 104, 90, 90, 400);
prependAnimationFrame(117, 64, 90, 90, 400);
prependAnimationFrame(70, 35, 90, 90, 400);
prependAnimationFrame(90, 90, 90, 90, 400);
prependAnimationFrame(145, 104, 90, 90, 400);
prependAnimationFrame(117, 64, 90, 90, 400);
prependAnimationFrame(70, 35, 90, 90, 400);
}
void huffing(void*){
prependAnimationFrame(90, 90, 90, 90, 150);
prependAnimationFrame(117, 99, 90, 90, 300);
prependAnimationFrame(81, 63, 90, 90, 300);
prependAnimationFrame(117, 99, 90, 90, 300);
prependAnimationFrame(81, 63, 90, 90, 300);
prependAnimationFrame(117, 99, 90, 90, 300);
prependAnimationFrame(81, 63, 90, 90, 150);
}
void turnleft(void*){
prependAnimationFrame(90, 90, 90, 90, 114);
prependAnimationFrame(76, 90, 130, 90, 200);
prependAnimationFrame(76, 90, 130, 90, 200);
prependAnimationFrame(65, 90, 130, 90, 425);
prependAnimationFrame(65, 30, 90, 90, 102);
prependAnimationFrame(60, 90, 90, 90, 102);
}
void turnright(void*){
prependAnimationFrame(90, 90, 90, 90, 114);
prependAnimationFrame(90, 104, 90, 50, 200);
prependAnimationFrame(90, 104, 90, 50, 200);
prependAnimationFrame(90, 115, 90, 50, 425);
prependAnimationFrame(150, 115, 90, 90, 102);
prependAnimationFrame(90, 120, 90, 90, 102);
}
void randomAction(void*){
    long num = random(0, 14);
    prependAnimationCallback(randomAction);
    switch(num){
        case 0:case 11:case 12:case 13:prependAnimationCallback(basic_step);break;
        case 1:prependAnimationCallback(basic_back);break;
        case 2:prependAnimationCallback(sitdown);break;
        case 3:prependAnimationCallback(moonwalk_r);break;
        case 4:prependAnimationCallback(turnleft);break;
        case 5:prependAnimationCallback(turnright);break;
        case 6:prependAnimationCallback(huffing);break;
        // case 7:prependAnimationCallback(acrobatic1);break;
        case 8:prependAnimationCallback(acrobatic2);break;
        // case 9:prependAnimationCallback(ballet);break;
        case 10:prependAnimationCallback(wink);break;
    }
}

void keep_walking_back(void*){
    prependAnimationCallback(keep_walking_back);
    prependAnimationCallback(basic_back);
}


void walk_back_collision(){
    prependAnimationCallback(mode_onWalkbackEnd);
    if(random(0, 2)){
        prependAnimationCallback(turnleft);
    }else{
        prependAnimationCallback(turnright);
    }
    prependAnimationCallback(basic_back);
    prependAnimationCallback(basic_back);
    prependAnimationFrame(90, 90, 90, 90, 400);
}


void acrobatic1(void*){
prependAnimationFrame(89, 90, 91, 89, 407);
prependAnimationFrame(90, 119, 90, 90, 1000);
prependAnimationFrame(42, 135, 90, 90, 1000);
prependAnimationFrame(90, 119, 90, 90, 1000);
prependAnimationFrame(42, 135, 90, 90, 1000);
prependAnimationFrame(155, 125, 90, 90, 209);
prependAnimationFrame(155, 125, 90, 90, 160);
}

void acrobatic2(void*){
prependAnimationFrame(90, 90, 90, 90, 232);
prependAnimationFrame(151, 125, 127, 127, 100);
prependAnimationFrame(0, 125, 127, 127, 100);
prependAnimationFrame(155, 121, 127, 127, 84);
prependAnimationFrame(155, 121, 127, 127, 700);
prependAnimationFrame(155, 125, 90, 90, 160);
}

void ballet(void*){
prependAnimationFrame(90, 90, 90, 90, 2500);
prependAnimationFrame(150, 30, 90, 90, 1500);
prependAnimationFrame(150, 30, 90, 90, 2500);
}

void sitdown(void*){
prependAnimationFrame(90, 90, 90, 90, 500);
prependAnimationFrame(0, 180, 143, 37, 1000);
prependAnimationFrame(0, 180, 143, 37, 1000);
prependAnimationFrame(0, 180, 143, 37, 1000);
prependAnimationFrame(0, 180, 143, 37, 300);
prependAnimationFrame(0, 180, 120, 60, 200);
prependAnimationFrame(30, 150, 90, 90, 500);
}

void wink(void*){
prependAnimationFrame(90, 90, 90, 90, 600);
prependAnimationFrame(155, 125, 90, 90, 250);
prependAnimationFrame(25, 125, 90, 90, 250);
prependAnimationFrame(155, 125, 90, 90, 250);
prependAnimationFrame(25, 125, 90, 90, 250);
prependAnimationFrame(155, 125, 90, 90, 250);
prependAnimationFrame(25, 125, 90, 90, 250);
prependAnimationFrame(155, 125, 90, 90, 400);
prependAnimationFrame(155, 125, 90, 90, 165);
}