/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   bool isOn, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__Prepare_2608e24
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,byte param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_160 [96];
  undefined1 auStack_100 [96];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02708e0c with catch @ 02708e2c
                        */
                    /* try { // try from 02708e44 to 02808e5b has its CatchHandler @ 02708e94 */
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_4 + 0x50) = param_5;
                    /* try { // try from 02708e5c to 02808e83 has its CatchHandler @ 02708dcc */
  FUN_012d0d74((undefined8 *)(param_4 + 0x50));
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  *(byte *)(param_4 + 0x58) = param_6 & 1;
  if (*(long *)(param_4 + 0x60) != 0) {
                    /* try { // try from 02708e84 to 02808e93 has its CatchHandler @ 02708e94 */
    Modules_Infrastructure_UI_Common_Scripts_SortingService__GetToggleItemSorting_40031a0
              (auStack_100,*(long *)(param_4 + 0x60),0);
                    /* catch() { ... } // from try @ 02708e44 with catch @ 02708e94
                       catch() { ... } // from try @ 02708e84 with catch @ 02708e94 */
                    /* try { // try from 02708e98 to 02808e9b has its CatchHandler @ 02708ea4 */
                    /* try { // try from 02708e9c to 02808ea7 has its CatchHandler @ 02708dcc */
    func_0x01037ce0(&uStack_a0,auStack_100,0x60);
    lVar3 = *(long *)(param_4 + 0x48);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02708e98 with catch @ 02708ea4
                        */
    func_0x01037ce0(auStack_100,&uStack_a0,0x60);
    if (lVar3 != 0) {
      uVar1 = *(undefined1 *)(param_4 + 0x58);
      uVar2 = *(undefined8 *)(param_4 + 0x50);
      func_0x01037ce0(auStack_160,auStack_100,0x60);
      Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__Prepare_2608f04
                (lVar3,auStack_160,uVar2,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

