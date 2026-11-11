/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_Board_Common_Scripts_SnitchSpawnInfo_o* snitchInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_Board_Common_Scripts_SnitchSpawnInfo_o* snitchInfo, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__Prepare_260da60
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
               undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  
  if ((bRam0000000005c2b9f3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05761608);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2b9f3 = 1;
  }
  param_4[10] = param_7;
  FUN_012d0d74(param_4 + 10,param_7);
  param_4[0xb] = param_8;
  FUN_012d0d74(param_4 + 0xb,param_8);
  *(undefined4 *)((long)param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 7) = param_2;
  *(undefined4 *)((long)param_4 + 0x3c) = param_3;
  *(undefined4 *)(param_4 + 0xe) = param_1;
  *(undefined4 *)((long)param_4 + 0x74) = param_2;
  *(undefined4 *)(param_4 + 0xf) = param_3;
                    /* try { // try from 0270dafc to 0280db23 has its CatchHandler @ 0270dcf8 */
  if ((param_9 != 0) && (param_4[9] != 0)) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__Prepare_260dbc8
              (param_4[9],*(undefined4 *)(param_9 + 0x28),param_5,param_6);
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalRotation_40ea1a4
              ((int)param_4[0xc],*(undefined4 *)((long)param_4 + 100),(int)param_4[0xd],
               *(undefined4 *)((long)param_4 + 0x6c),param_4,0);
    puVar4 = PTR_DAT_0576aae0;
    if (param_7 != 0) {
                    /* try { // try from 0270db3c to 0280db9f has its CatchHandler @ 0270dcfc */
      if (*(long *)(param_7 + 0x28) == 0) {
        *(undefined1 *)(param_4 + 0x11) = 0;
      }
      else {
        *(undefined1 *)(param_4 + 0x11) = 1;
        (**(code **)(*param_4 + 0x288))(param_4,*(undefined8 *)(*param_4 + 0x290));
      }
      param_4[0x10] = param_9;
      FUN_012d0d74(param_4 + 0x10,param_9);
      if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
         (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) {
        lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar5,*(undefined8 *)PTR_DAT_05761608);
        param_4 = param_4 + 0x12;
        *param_4 = lVar5;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)param_4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)param_4 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

