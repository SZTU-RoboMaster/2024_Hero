//%%88888888888888888888888888888888888888888888888888888888888888888888888888888%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%8%&%BB%B%8%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%i. .  `iJ8B8B%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%B8%%Bw''.  '.''`q%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%BB].. .......'.w$%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%BBm^'.........`+B8B%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%88' .........."B%BB%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%8Bf .........'.0&88%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%B&@8B%8%%%%%%%%%%%%BB8%%w  ........`]CB%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%BW@%B%8%%%%%%%%%%%%%%%@~  . .......^88%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%BB%8%%8#>d8%%$%8%%%%%%%B8%%b. ........  #8%%%%%8%%}}C,UWW%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%W&%pl` ''''`[LB%%BZq-x{Z@BJ   ..... ..lJ%%B}C}W%W*`...... ]8$%%%%B%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%O`'`'.    . '  '.'^ ?%%B%b:. ...... ..&@%%B~.... .. .....^` `w#&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%W`.'..'    ... .'.X{BB%L..   ...  ..O%8BBz..            ..:C%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%BB_'......... ' `w@%B%B`  `......`Ib@%%&%JI .           ..QBB%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%J' ..... '. Ih@#BB%%{a'  .......'"&}BBBBBBB%B%%hu '.    . ''Q$&%B%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%B%%%%%%%8%8%b^''..' . "+{WW8%%%%&%J       .....0@BBBBBBB%%%%BB%B$w .'.     'h8%%%%B%%%B%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%@^ .'''"..''.''.'.''M%#8B%%%%%%8M`'..     ...h%BBBBB%%%%%%%BBB%BB%C[`   .. '','''.'` B%%%%%%%%%%%%%%%%%%%
//%%%%%%%%Bj`    .'. '......^B%B%%%%%%%%%%k"'.'       ,M@BBB&%%BBBB8%&ZUYhaw#%&W'`  ...........' 8%%%%%%%%%%%%%%%%%%
//%%%%%%%8L``'.   '    . ^`?@%%8%%%%%%B%8L` '        ''.'...'...........'..z@BB@BL.'...        .`_Z%%%%%%%%%%%%%%%%%
//%%%%%%%m;`''''''......."&8%%8%%%%%%%%B%` .       . . .'.  .......    '.'C%%BB%B&J'         ..'':_%@%%%%%%%%%%%%%%%
//%%%%%%%%B%%%%%o ..... .v%B%%%%%%%%%BB%'^..                          .''J&88%%%B%8t.....   0&@88%8%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%f      .'$B%%%%%%%%%%8Q+'. . ... '''..    '`^.`.        a8&8%8%%%%B$`.......kB%%888%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%+'      ^B%%%%%%%%8%%&.'  . '';Y%%%8%BB%BBBBb  . . .   08BB88%%%%%%}'.     .n%88888%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%B8h^      'MB8%%%%%%%8%:.   ......^u&%%B%%BB&h       '.'q%8%%%%%%%%%BZ'.   . .bB88888%%%%%%%%%%%%%%%%%
//%%%%%%%W%$MQh:..     .._B%%%%%%%B#j       .  .U%%88888BB!..    ... v%8%%%%%%%%%%Bl     .'''nw&W@$%%%%%%%%%%%%%%%%%
//%%%%%%%#+''.''`'''... . *$%%%%%%W''        . zB%%%8888B<'`    ....J&8%%%%%%%%%BBw.      ...'.',.b%%%%%%%%%%%%%%%%%
//%%%%%%%B8l.............'."O@%%8W^.  ..     :u&%&%B%%%p' '''..   .bBW%%%%%%%%%%C+.'     ....... %W%%%%%%%%%%%%%%%%%
//%%%%%%%%%&..'.''. `  ..''' n&%QnkhJM&8B@BBB%%88%8888q...        o%88%%%%%%%&%]`.. ...  .  .  'M&%%%%%%%%%%%%%%%%%%
//%%%%%%%B%@ZadJLO888h`'''..   ;%@8%BB%%8&8%%888888%%Q'..       '+&8%%%%%%%W@l. .. .'''C%BW0Xkkq%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%B%%B%8%BWQ '.''''' `>{BW%%B8%%%%%8888BZ`'.     . 'q88%BB%B8B!^. ..'... [&%%BBB%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%B%8%%8%%Bk .'''''`.^`'xY8%%%%%%%%%8f ^       . r$8%%&Bt`^   .. ... Y@&88%%%%8%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%B%%%%B%8B%8%Wl^'.. ......  ''',[J&%8Bv` .       .,%8%_.`' .....   . 'Z&88%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%B%%%%%%%%%%%%%%%%%%@k'`''........ .   . +B%%X!.        ..b}%al    '... .    '.`tBB8%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%8B{~''`'........:j,'.']BBBJ. .     ..  v%@q ^  '``... .     '.'L8%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%@%&BQ` ''  ,#%B%8BB&8B&0' .      ..'<&8&888%88&%%Bu     'w#$%8%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%B%%%%%%%%%%%%%%%%%%%88WkMB8%%%%%%%%%%f'          .b%8%%%%%%%%%%%%8%@mW@B%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%8B%%%B%%8%%%%%B%x`.        . -B8%%%%%%%%%%%B&8%%%%%B%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%B%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#z'`.      .' .B&B8%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//B%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%8B@M` ..      . ^nOB%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%C'.. .     ..']%B%%%8%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%BB#....        ' BB%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%Bq .   .    ' Q%BB%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%88888] .^^.   "p@B%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%B%%B%$d'"  ^.&BB8%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%BB%8M '^hB%8%88%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%B88%%%%W&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#include "launcher.h"
#include "Gimbal.h"

first_order_filter_type_t filter_shoot_rpm_in;
extern key_board_t KeyBoard;
extern RC_ctrl_t rc_ctrl;
extern gimbal_t gimbal;
extern chassis_t chassis;
extern launcher_t launcher;
extern trigger_t trigger;
extern robot_ctrl_info_t robot_ctrl;



static uint8_t rc_last_sw_L;
static int32_t total_ecd_ref;      //电机总编码值

void launcher_mode_set(){
    //摩擦轮关闭时,做拨杆向上拨一下开启摩擦轮
    //遥控器和键盘可以同步修改摩擦轮状态
    // 键盘直接修改相关按键click_flag的状态 通过click状态直接判断摩擦轮模式 避免遥控打开的摩擦轮被键盘关闭
    if((!switch_is_up(rc_last_sw_L)&&switch_is_up(rc_ctrl.rc.s[RC_s_L]))){
        if(KeyBoard.Q.click_flag==1 && (chassis.mode==CHASSIS_FOLLOW_GIMBAL || chassis.mode==CHASSIS_SPIN || chassis.mode==CHASSIS_BLOCK || chassis.mode==CHASSIS_INDEPENDENT_CONTROL)) {
            KeyBoard.Q.click_flag=0;
        }
        else if(KeyBoard.Q.click_flag==0 && (chassis.mode==CHASSIS_FOLLOW_GIMBAL || chassis.mode==CHASSIS_SPIN || chassis.mode==CHASSIS_BLOCK || chassis.mode==CHASSIS_INDEPENDENT_CONTROL)) {
            KeyBoard.Q.click_flag=1;
        }
    }

    if(KeyBoard.Q.click_flag==1 && (chassis.mode==CHASSIS_FOLLOW_GIMBAL || chassis.mode==CHASSIS_SPIN || chassis.mode==CHASSIS_BLOCK || chassis.mode==CHASSIS_INDEPENDENT_CONTROL)) {
        launcher.fire_mode=Fire_ON;
        laser_on();
    }
    else if (KeyBoard.Q.click_flag==0 && (chassis.mode==CHASSIS_FOLLOW_GIMBAL || chassis.mode==CHASSIS_SPIN || chassis.mode==CHASSIS_BLOCK || chassis.mode==CHASSIS_INDEPENDENT_CONTROL)) {
        launcher.fire_mode=Fire_OFF;
        laser_off();
    }

    //摩擦轮开启时,做拨杆向上拨一下关闭摩擦轮
    //拨轮控制 拨轮转动的条件是 当前摩擦轮是开的
    //要么遥控器拨杆向下播一下
    //要么鼠标左键点一下
    if(launcher.fire_mode == Fire_ON
       &&((switch_is_down(rc_ctrl.rc.s[RC_s_L]) || KeyBoard.Mouse_l.status==KEY_CLICK)
          ||KeyBoard.Mouse_l.status == KEY_PRESS
          ||launcher.single_shoot_cmd == SHOOT_ING
          ||robot_ctrl.fire_command!=0))
    {
        if((!switch_is_down(rc_last_sw_L) && switch_is_down(rc_ctrl.rc.s[RC_s_L]))
//           || (KeyBoard.Mouse_l.status == KEY_CLICK) && (launcher.single_shoot_cmd!=SHOOT_ING))
            || (KeyBoard.Mouse_l.status == KEY_CLICK
                ||robot_ctrl.fire_command!=0))
        {
            launcher.single_shoot_cmd = SHOOT_SINGLE;
        }
    }
    else { //摩擦轮没开默认关闭
        launcher.single_shoot_cmd=SHOOT_CLOSE;
    }
    rc_last_sw_L=rc_ctrl.rc.s[RC_s_L];
}


void launcher_control() {
    if(gimbal.mode==GIMBAL_RELAX) { //||detect_list[DETECT_REMOTE].status==OFFLINE
        launcher_relax_handle();
    }
    else if(gimbal.mode != GIMBAL_RELAX) {
        if (launcher.fire_mode == Fire_ON) {
            launcher.fire_l.speed = FIRE_SPEED;
            launcher.fire_r.speed = -FIRE_SPEED;
            if (launcher.single_shoot_cmd == SHOOT_CLOSE) {
                launcher.single_shoot.speed = 0;
            }
            else if (launcher.single_shoot_cmd == SHOOT_SINGLE) { //单发状态
                launcher.single_shoot_cmd = SHOOT_ING;//进入正在单发状态
                total_ecd_ref = launcher.single_shoot.motor_measure->total_ecd - DEGREE_93_TO_ENCODER;
            }
            launcher.single_shoot.speed = pid_calc(&launcher.single_shoot.angle_p,
                                                   launcher.single_shoot.motor_measure->total_ecd,
                                                   total_ecd_ref);
        }
        else {
            launcher.fire_l.speed = 0;
            launcher.fire_r.speed = 0;
            launcher.single_shoot.speed=0;
            total_ecd_ref=launcher.single_shoot.motor_measure->total_ecd;
        }
        launcher.single_shoot.give_current =
                (int16_t)pid_calc(&launcher.single_shoot.speed_p,
                                  launcher.single_shoot.motor_measure->speed_rpm,
                                  launcher.single_shoot.speed);

        first_order_filter_cali(&filter_shoot_rpm_in, launcher.fire_l.motor_measure->speed_rpm);
        first_order_filter_cali(&filter_shoot_rpm_in, launcher.fire_r.motor_measure->speed_rpm);

        launcher.fire_l.give_current =
                (int16_t) pid_calc(&launcher.fire_l.speed_p,
                                   launcher.fire_l.motor_measure->speed_rpm,
                                   launcher.fire_l.speed);
        launcher.fire_r.give_current =
                (int16_t) pid_calc(&launcher.fire_r.speed_p,
                                   launcher.fire_r.motor_measure->speed_rpm,
                                   launcher.fire_r.speed);
    }
//    block_led();//卡弹指示灯
}

/*void block_led()
{
    if(vector_receive_msg.trigger_flag==trigger_block)//卡弹提示
    {
        HAL_GPIO_WritePin(LED3_PORT,LED3_PIN,GPIO_PIN_RESET);
    }
    else
    {
        HAL_GPIO_WritePin(LED3_PORT,LED3_PIN,GPIO_PIN_SET);
    }
}
*/

//发射机构失能
void launcher_relax_handle(){
    launcher.fire_r.give_current=0;
    launcher.fire_l.give_current=0;
    launcher.single_shoot.give_current=0;
}

void launcher_init(){
    // 选择拨盘运动方式
//#define KEEP
#ifdef KEEP
    trigger.state = KEEP_ROTATING;  //一直转
#else //ROTATION
    trigger.state = ROTATION_ANGLE; //转角度
#endif
    launcher.single_shoot_cmd=SHOOT_CLOSE;//初始时发射机构默认关闭
    launcher.fire_last_mode=Fire_OFF;//初始时摩擦轮默认关闭
    launcher.fire_mode=Fire_OFF;//初始时摩擦轮默认关闭

    //获取发射机构电机数据结构体
    launcher.fire_l.motor_measure=&motor_3508_measure[FIRE_L];
    launcher.fire_r.motor_measure=&motor_3508_measure[FIRE_R];
    launcher.single_shoot.motor_measure=&motor_2006_measure;

    //发射机构电机PID初始化
    pid_init(&launcher.fire_r.speed_p,
             SHOOT_FIRE_R_PID_MAX_OUT, SHOOT_FIRE_R_PID_MAX_IOUT,
             SHOOT_FIRE_R_PID_KP, SHOOT_FIRE_R_PID_KI, SHOOT_FIRE_R_PID_KD);

    pid_init(&launcher.fire_l.speed_p,
             SHOOT_FIRE_L_PID_MAX_OUT, SHOOT_FIRE_L_PID_MAX_IOUT,
             SHOOT_FIRE_L_PID_KP, SHOOT_FIRE_L_PID_KI, SHOOT_FIRE_L_PID_KD);

    pid_init(&launcher.single_shoot.speed_p,
             SINGLE_SHOOT_SPEED_PID_MAX_OUT, SINGLE_SHOOT_SPEED_PID_MAX_IOUT,
             SINGLE_SHOOT_SPEED_PID_KP, SINGLE_SHOOT_SPEED_PID_KI, SINGLE_SHOOT_SPEED_PID_KD);

    pid_init(&launcher.single_shoot.angle_p,
             SINGLE_SHOOT_ANGLE_PID_MAX_OUT, SINGLE_SHOOT_ANGLE_PID_MAX_IOUT,
             SINGLE_SHOOT_ANGLE_PID_KP, SINGLE_SHOOT_ANGLE_PID_KI, SINGLE_SHOOT_ANGLE_PID_KD);

    //最开始的编码值作为拨轮电机的校准值
    launcher.single_shoot.motor_measure->total_ecd=launcher.single_shoot.motor_measure->offset_ecd=launcher.single_shoot.motor_measure->ecd;
    first_order_filter_init(&filter_shoot_rpm_in,0.05f, 0.5f);
}