/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$SetVariant
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__SetVariant (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, int32_t variantId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$SetVariant
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__SetVariant
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, int32_t variantId,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__SetVariant_2490c0c
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000005c2b2a5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f5518);
    FUN_012d0dc8(PTR_DAT_057db0a0);
    FUN_012d0dc8(PTR_DAT_05783f50);
    FUN_012d0dc8(PTR_DAT_0575e910);
    bRam0000000005c2b2a5 = 1;
  }
  puVar2 = PTR_DAT_057f5518;
  puVar1 = PTR_DAT_057db0a0;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_68,*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_0575e910);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  lStack_40 = lStack_58;
  while( true ) {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_50,*(undefined8 *)puVar1);
    lVar3 = lStack_40;
    if ((uVar4 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_50,*(undefined8 *)puVar2);
      return;
    }
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(lStack_40 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lStack_40 + 0x18),0);
    if (lVar5 == 0) break;
    UnityEngine_GameObject__SetActive_408e318(lVar5,*(int *)(lVar3 + 0x10) == param_2,0);
    if (*(int *)(lVar3 + 0x10) == param_2) {
      *(long *)(param_1 + 0x68) = lVar3;
      FUN_012d0d74((long *)(param_1 + 0x68),lVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

