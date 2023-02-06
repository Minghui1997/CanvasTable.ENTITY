#pragma comment(lib,"CanvasTable.lib")

extern void* NULL;

//--------------------------------------------------------------------
// 按键键值
//--------------------------------------------------------------------
extern int key_a;
extern int key_b;
extern int key_c;
extern int key_d;
extern int key_e;
extern int key_f;
extern int key_g;
extern int key_h;
extern int key_i;
extern int key_j;
extern int key_k;
extern int key_l;
extern int key_m;
extern int key_n;
extern int key_o;
extern int key_p;
extern int key_q;
extern int key_r;
extern int key_s;
extern int key_t;
extern int key_u;
extern int key_v;
extern int key_w;
extern int key_x;
extern int key_y;
extern int key_z;
extern int key_1;
extern int key_2;
extern int key_3;
extern int key_4;
extern int key_5;
extern int key_6;
extern int key_7;
extern int key_8;
extern int key_9;
extern int key_0;
extern int key_f1;
extern int key_f2;
extern int key_f3;
extern int key_f4;
extern int key_f5;
extern int key_f6;
extern int key_f7;
extern int key_f8;
extern int key_f9;
extern int key_f10;
extern int key_f11;
extern int key_f12;
extern int key_up;
extern int key_down;
extern int key_left;
extern int key_right;
extern int key_esc;
extern int key_tab;
extern int key_cap;
extern int key_shift;
extern int key_ctrl;
extern int key_alt;
extern int key_space;
extern int key_enter;
extern int key_back;
extern int key_num1;
extern int key_num2;
extern int key_num3;
extern int key_num4;
extern int key_num5;
extern int key_num6;
extern int key_num7;
extern int key_num8;
extern int key_num9;
extern int key_num0;
extern int mkey_left;
extern int mkey_middle;
extern int mkey_right;
extern int mkey_up;
extern int mkey_down;
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// 图像字体对象
//--------------------------------------------------------------------
typedef struct _CTimgfont
{
    int FontImg;
    int CharNumber;
    int CharGap;
    int CharHeight;
    char *CharList;
    int *GlyphList;
}CTimgfont;
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// 窗口对象
//--------------------------------------------------------------------
typedef struct _CTwindow
{
    int x; //窗口位置x
    int y; //窗口位置y
    int width; //窗口宽度
    int height; //窗口高度
    int color_background; //窗口背景颜色
    int color_borderUp; //窗口上边框颜色
    int color_borderDown; //窗口下边框颜色
    int color_borderLeft; //窗口左边框颜色
    int color_borderRight; //窗口右边框颜色
    int image; //窗口背景图像
    int image_o; //窗口背景图像偏移
    int layer; //窗口层
//--------------------------------------------------------------------
    int type; //ui对象类型
    int index; //窗口索引
    int id; //ID
}CTwindow;
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// UI对象
//--------------------------------------------------------------------
typedef struct _CTui
{
    int index; //ui对象索引
    int type; //ui对象类型
    int id; //ID
//--------------------------------------------------------------------
    int x; //UI位置x
    int y; //UI位置y
    int width; //UI宽度
    int height; //UI高度
    int color_background; //UI背景颜色
    int color_borderUp; //UI上边框颜色
    int color_borderDown; //UI下边框颜色
    int color_borderLeft; //UI左边框颜色
    int color_borderRight; //UI右边框颜色
    int color_text; //UI文本颜色
    int color_border; //UI边框颜色
    int color_widget; //UI部件颜色
    int background; //UI背景图像
    int background_o; //UI背景图像偏移
    char *text; //UI显示文本
    int status; //UI状态
    int group; //UI选框组
    int value; //UI默认值
    int maxvalue; //UI最大值
    int password; //密码文本框
    int number; //数字文本框
    int max; //文本框最大字符数
    int readonly; //文本框只读
    int subbox; //子文本框
    char *name; //文本框名称
    CTimgfont *imgfont; //图像字体
    int image; //图像索引
    int subnum; //子图像数量
    int subimg; //子图像索引
    int subimg_o; //子图像偏移
}CTui;
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// 场景对象
//--------------------------------------------------------------------
typedef struct _CTscene
{
    int width; //场景宽度
    int height; //场景高度
    int grid_width; //场景网格宽度
    int grid_height; //场景网格高度
    int tile_image[32]; //瓦片图像列表
    int *tile_map[32]; //瓦片地图层0
    int tile_offset; //瓦片图像偏移
    void (*sprite_map)(); //sprite地图
//--------------------------------------------------------------------
    int type; //类型
}CTscene;
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// Sprite对象
//--------------------------------------------------------------------
typedef struct _CTsprite
{
    int image; //sprite图像索引
    int layer; //sprite层
    int subnum; //sprite子图像数量
    int subimg; //sprite子图像索引
    int subimg_o; //sprite子图像
    int collision_type; //sprite碰撞方式
    int collision_edge; //sprite边缘碰撞
    int cbox_x; //碰撞盒位置x
    int cbox_y; //碰撞盒位置y
    int cbox_w; //碰撞盒宽度
    int cbox_h; //碰撞盒高度
    int cbox_cx; //碰撞盒中心位置x
    int cbox_cy; //碰撞盒中心位置y
    int cbox_r; //碰撞盒半径
    int color; //sprite颜色
    void (*main)(); //sprite程序main函数
    void (*loop)(); //sprite程序loop函数
//--------------------------------------------------------------------
    int id; //sprite id
    int type; //类型
}CTsprite;
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// 基础函数
//--------------------------------------------------------------------
void CT_init(int iw,int ih,char **rl,int rl_n,void *CT_main,void *CT_loop,int dm,int sph,int lbh,int ww,int wh,int arg6,int arg7,int arg8,int arg9,int arg10,int arg11,int arg12,int arg13,int arg14,int arg15,int arg16);
void cprint(char *str);
int keyboard_press(int key);
int keyboard_down(int key);
int keyboard_up(int key);
char keyboard_char();
int mouse_press(int mkey);
int mouse_down(int mkey);
int mouse_up(int mkey);
int mouse_x();
int mouse_y();
int mouse_wheel(int mkey);
void touchkey_create(int id,int x,int y,int w,int h,int key);
void touchkey_delete(int id);
void touchkey_image(int id,int img);
void view_set_x(int x);
void view_set_y(int y);
int view_x();
int view_y();
void draw_set_layer(int l);
void draw_clear();
void draw_rect(int x,int y,int w,int h,int c,int f);
void draw_line(int x1,int y1,int x2,int y2,int w,int c);
void draw_circle(int x,int y,int r,int c,int f);
void draw_string(int x,int y,int s,int c,char *t);
void draw_image(int x,int y,int img);
void draw_image_part(int x,int y,int img,int ix,int iy,int iw,int ih);
void draw_curve(int x1,int y1,int x2,int y2,int x3,int y3,int w,int c);
void draw_tri(int x1,int y1,int x2,int y2,int x3,int y3,int c,int f);
void draw_istring(int x,int y,int c,CTimgfont *font,char *t);
int res(char *n);
void audio_play(int a,int l);
void audio_stop(int a);
int string_pxwidth(char *str,int s);
void timer_set(char *timer,float time);
void timer_set_f(char *timer,int fn);
void timer_clear(char *timer);
void timer_run(char *timer);
void timer_stop(char *timer);
void timer_pause(char *timer);
int timer_end(char *timer);
void globaltimer_set(char *timer,float time);
void globaltimer_set_f(char *timer,int fn);
void globaltimer_clear(char *timer);
void globaltimer_run(char *timer);
void globaltimer_stop(char *timer);
void globaltimer_pause(char *timer);
int globaltimer_end(char *timer);
int color(int r,int g,int b,int a);
void rectab_open(char *name);
void rectab_close();
void rectab_delete(char *name);
int rectab_read(char *dest,char *title);
void rectab_write(char *title,char *text);
void rectab_null(char *title);
void rectab_save();
char *textdata_read(int t);
int textdata_line(int t);
int textdata_read_line(char *dest,int t,int l);
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// 图像字体函数
//--------------------------------------------------------------------
void CTimgfont_new(CTimgfont *imgfont);
void imgfont_set(CTimgfont *imgfont);
int istring_pxwidth(CTimgfont *font,char *str);
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// UI函数
//--------------------------------------------------------------------
void CTwindow_new(CTwindow *win);
void CTbutton_new(CTui *ctui);
void CTtext_new(CTui *ctui);
void CTcheckbox_new(CTui *ctui);
void CTradio_new(CTui *ctui);
void CTprogressbar_new(CTui *ctui);
void CTtextbox_new(CTui *ctui);
void CTimagement_new(CTui *ctui);
void CTui_set_imgfont(CTui *ctui,CTimgfont *font);
void CTwindow_create(CTwindow *win);
void CTwindow_destroy(CTwindow *win);
void CTwindow_set_x(CTwindow *win,int x);
void CTwindow_set_y(CTwindow *win,int y);
void CTwindow_set_width(CTwindow *win,int w);
void CTwindow_set_height(CTwindow *win,int h);
void CTwindow_set_image(CTwindow *win,int i);
void CTwindow_set_color(CTwindow *win,char *prop,int col);
void CTui_create(CTwindow *win,CTui *ctui);
void CTui_destroy(CTui *ctui);
void CTui_set_x(CTui *ctui,int x);
void CTui_set_y(CTui *ctui,int y);
void CTui_set_width(CTui *ctui,int w);
void CTui_set_height(CTui *ctui,int h);
void CTui_set_image(CTui *ctui,int img);
void CTui_set_color(CTui *ctui,char *prop,int col);
int button_click(CTui *ctui);
int button_press(CTui *ctui);
int button_down(CTui *ctui);
int button_up(CTui *ctui);
int checkbox_status(CTui *ctui);
int radio_status(CTui *ctui);
void progressbar_set(CTui *ctui,int val);
char *textbox_string(CTui *ctui);
void textbox_set_string(CTui *ctui,char *str);
void imagement_set_image(CTui *ctui,int img,int subnum);
void imagement_set_subimg(CTui *ctui,int i);
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// 场景函数
//--------------------------------------------------------------------
void CTscene_new(CTscene *scene);
void scene_enter(CTscene *scene);
void tile_create(int l,int x,int y,int res,int gx,int gy);
void tile_destroy(int l,int x,int y);
int tile_check(int l,int x,int y);
int scene_width();
int scene_height();
int grid_width();
int grid_height();
void m(int x,int y,CTsprite *ctspr);
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// Sprite函数
//--------------------------------------------------------------------
void CTsprite_new(CTsprite *ctspr);
int sprite_create(int x,int y,CTsprite *ctspr);
void sprite_destroy();
int sprite_x();
int sprite_y();
void sprite_set_x(int x);
void sprite_set_y(int y);
void sprite_set_layer(int l);
int sprite_collision(CTsprite *collspr);
void sprite_set_rectbox(int x,int y,int w,int h);
void sprite_set_cirbox(int cx,int cy,int r);
void sprite_set_subimg(int index);
void sprite_set_color(int col);
void spritenum_set(int i,double n);
void spritestr_set(int i,char *s);
double spritenum(int i);
char *spritestr(int i);
int sprite_check(int x,int y,CTsprite *ctspr);
int sprite_index();
void isprite_destroy(int si);
int isprite_x(int si);
int isprite_y(int si);
void isprite_set_x(int si,int x);
void isprite_set_y(int si,int y);
void isprite_set_layer(int si,int l);
int isprite_collision(int si);
void isprite_set_rectbox(int si,int x,int y,int w,int h);
void isprite_set_cirbox(int si,int cx,int cy,int r);
int isprite_check(int x,int y,int si);
void isprite_set_subimg(int si,int index);
void isprite_set_color(int si,int col);
void ispritenum_set(int si,int i,double n);
void ispritestr_set(int si,int i,char *s);
double ispritenum(int si,int i);
char *ispritestr(int si,int i);
void sprite_destroy_all(CTsprite *ctspr);
void sprite_all_set_x(CTsprite *ctspr,int x);
void sprite_all_set_y(CTsprite *ctspr,int y);
void sprite_all_set_layer(CTsprite *ctspr,int l);
void sprite_all_set_rectbox(CTsprite *ctspr,int x,int y,int w,int h);
void sprite_all_set_cirbox(CTsprite *ctspr,int cx,int cy,int r);
void sprite_all_set_subimg(CTsprite *ctspr,int index);
void sprite_all_set_color(CTsprite *ctspr,int col);
void spritenum_all_set(CTsprite *ctspr,int vi,double n);
void spritestr_all_set(CTsprite *ctspr,int vi,char *s);
//--------------------------------------------------------------------