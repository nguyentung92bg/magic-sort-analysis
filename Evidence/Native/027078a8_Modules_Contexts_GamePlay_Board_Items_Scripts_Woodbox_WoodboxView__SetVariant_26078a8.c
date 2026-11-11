/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxView$$SetVariant
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetVariant (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView_o* __this, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxView$$SetVariant
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetVariant
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView_o* __this, int32_t
   blockerVariant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetVariant_26078a8
               (long param_1,int param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000005c2b9c2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05770f80);
    FUN_012d0dc8(PTR_DAT_057805c0);
    FUN_012d0dc8(PTR_DAT_057f3690);
    FUN_012d0dc8(PTR_DAT_057b0180);
    bRam0000000005c2b9c2 = 1;
  }
  puVar3 = PTR_DAT_057805c0;
  puVar2 = PTR_DAT_05770f80;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_68,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057b0180);
  plVar1 = (long *)(param_1 + 0x30);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  lStack_40 = lStack_58;
  while( true ) {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_50,*(undefined8 *)puVar3);
    lVar6 = lStack_40;
    if ((uVar4 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_50,*(undefined8 *)puVar2);
      return;
    }
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(lStack_40 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
                    /* try { // try from 0270796c to 02807a87 has its CatchHandler @ 0270796c
                       catch() { ... } // from try @ 0270796c with catch @ 0270796c
                       catch() { ... } // from try @ 02707bb4 with catch @ 0270796c
                       catch() { ... } // from try @ 02707c3c with catch @ 0270796c
                       catch() { ... } // from try @ 02707c44 with catch @ 0270796c
                       catch() { ... } // from try @ 02707ce8 with catch @ 0270796c */
    lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lStack_40 + 0x10),0);
    if (lVar5 == 0) break;
    UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
    if (*(int *)(lVar6 + 0x18) == param_2) {
      *plVar1 = lVar6;
      FUN_012d0d74(plVar1,lVar6);
      if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar6 = *(long *)(*plVar1 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar6,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

