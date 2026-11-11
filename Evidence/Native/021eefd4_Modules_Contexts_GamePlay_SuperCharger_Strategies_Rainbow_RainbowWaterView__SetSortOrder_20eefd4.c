/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$SetSortOrder
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSortOrder (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView_o* __this, int32_t sortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$SetSortOrder
   void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSortOrder
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView_o* __this, int32_t
   sortOrder, const MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSortOrder_20eefd4
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c2974a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    bRam0000000005c2974a = 1;
  }
  puVar2 = PTR_DAT_057fbae0;
  puVar1 = PTR_DAT_057936b8;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0579f3e8);
    while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_38,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_Renderer__set_sortingOrder_40826fc(lStack_28,param_2,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_38,*(undefined8 *)puVar1);
  }
  return;
}

