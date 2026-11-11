/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleStopperView$$SetVariant
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__SetVariant (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView_o* __this, int32_t variantId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleStopperView$$SetVariant
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__SetVariant
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView_o* __this, int32_t
   variantId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__SetVariant_22fbafc
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000005c2a5f5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057edb18);
    FUN_012d0dc8(PTR_DAT_057e15c8);
    FUN_012d0dc8(PTR_DAT_057dc958);
    FUN_012d0dc8(PTR_DAT_057f6708);
    bRam0000000005c2a5f5 = 1;
  }
  puVar2 = PTR_DAT_057edb18;
  puVar1 = PTR_DAT_057e15c8;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_78,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057f6708);
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  lStack_50 = lStack_68;
  while( true ) {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_60,*(undefined8 *)puVar1);
    lVar3 = lStack_50;
    if ((uVar4 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_60,*(undefined8 *)puVar2);
      return;
    }
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(lStack_50 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lStack_50 + 0x18),0);
    if (lVar5 == 0) break;
    UnityEngine_GameObject__SetActive_408e318(lVar5,*(int *)(lVar3 + 0x10) == param_2,0);
    if (*(int *)(lVar3 + 0x10) == param_2) {
      *(long *)(param_1 + 0x28) = lVar3;
      FUN_012d0d74((long *)(param_1 + 0x28),lVar3);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) =
           *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
      FUN_012d0d74();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

