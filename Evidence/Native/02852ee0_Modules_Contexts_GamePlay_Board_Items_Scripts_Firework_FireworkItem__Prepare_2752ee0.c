/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, int32_t fireworkCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this,
   UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, int32_t
   fireworkCount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__Prepare_2752ee0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000005c2c70e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b37b8);
    FUN_012d0dc8(PTR_DAT_05776e08);
    bRam0000000005c2c70e = 1;
  }
  *(undefined8 *)(param_4 + 0x50) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  *(undefined8 *)(param_4 + 0x58) = param_8;
  FUN_012d0d74((undefined8 *)(param_4 + 0x58),param_8);
  *(undefined4 *)(param_4 + 0x60) = param_9;
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  puVar4 = PTR_DAT_05776e08;
  if (*(long *)(param_4 + 0x48) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__Prepare_2752fe4
              (*(long *)(param_4 + 0x48),param_5,param_6,param_9);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar5 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_057b37b8);
      plVar6 = (long *)(param_4 + 0x68);
      *plVar6 = lVar5;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

