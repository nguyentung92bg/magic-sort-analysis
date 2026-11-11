/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$SetVariant
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__SetVariant (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, int32_t variantIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$SetVariant
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__SetVariant
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, int32_t
   variantIndex, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__SetVariant_230d744
               (long param_1,int param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000005c2a67e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2a30);
    FUN_012d0dc8(PTR_DAT_057a0230);
    FUN_012d0dc8(PTR_DAT_057d4160);
    FUN_012d0dc8(PTR_DAT_057ce4f8);
    bRam0000000005c2a67e = 1;
  }
  puVar3 = PTR_DAT_057d2a30;
  puVar2 = PTR_DAT_057a0230;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_68,*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_057ce4f8);
                    /* try { // try from 0240d7d4 to 0250d7db has its CatchHandler @ 0240d8c0 */
                    /* try { // try from 0240d7dc to 0250d897 has its CatchHandler @ 0240d5e0 */
  plVar1 = (long *)(param_1 + 0x50);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  lStack_40 = lStack_58;
  while( true ) {
    do {
      do {
        uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_50,*(undefined8 *)puVar2);
        if ((uVar4 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_50,*(undefined8 *)puVar3);
          return;
        }
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      } while (*(int *)(lStack_40 + 0x10) != param_2);
      *plVar1 = lStack_40;
      FUN_012d0d74(plVar1,lStack_40);
      lVar5 = *plVar1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    } while (*(char *)(lVar5 + 0x28) == '\0');
    if (*(long *)(lVar5 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x30),0);
    if (lVar5 == 0) break;
    UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

