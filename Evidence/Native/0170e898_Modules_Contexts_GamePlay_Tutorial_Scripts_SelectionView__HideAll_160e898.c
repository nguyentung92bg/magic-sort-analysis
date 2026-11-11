/* IL2CPP: Modules.Contexts.GamePlay.Tutorial.Scripts.SelectionView$$HideAll
void Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView__HideAll (Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Tutorial.Scripts.SelectionView$$HideAll
   void Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView__HideAll
   (Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView__HideAll_160e898(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000005c2445a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058171e0);
    FUN_012d0dc8(PTR_DAT_057eb3d8);
    FUN_012d0dc8(PTR_DAT_057f40c8);
    FUN_012d0dc8(PTR_DAT_057eb1d0);
    FUN_012d0dc8(PTR_DAT_0578d630);
    FUN_012d0dc8(PTR_DAT_05818290);
    bRam0000000005c2445a = 1;
  }
  puVar5 = PTR_DAT_05818290;
  puVar4 = PTR_DAT_058171e0;
  puVar3 = PTR_DAT_057eb3d8;
  puVar2 = PTR_DAT_0578d630;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_78,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_0578d630);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_60,*(undefined8 *)puVar3), lVar8 = lStack_50, (uVar6 & 1) != 0
          ) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar7 = UnityEngine_Component__get_gameObject_408b480(lStack_50,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Infrastructure_Common_Scripts_Pool_Pool_object___Return_30f964c
                (*(long *)(param_1 + 0x18),lVar8,*(undefined8 *)puVar5);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_60,*(undefined8 *)puVar4);
    if (*(long *)(param_1 + 0x40) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_78,*(long *)(param_1 + 0x40),*(undefined8 *)puVar2);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_60,*(undefined8 *)puVar3), lVar8 = lStack_50,
            (uVar6 & 1) != 0) {
        if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar7 = UnityEngine_Component__get_gameObject_408b480(lStack_50,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Infrastructure_Common_Scripts_Pool_Pool_object___Return_30f964c
                  (*(long *)(param_1 + 0x20),lVar8,*(undefined8 *)puVar5);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_60,*(undefined8 *)puVar4);
      lVar8 = *(long *)(param_1 + 0x38);
      if (lVar8 != 0) {
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
        }
        lVar8 = *(long *)(param_1 + 0x40);
        if (lVar8 != 0) {
          iVar1 = *(int *)(lVar8 + 0x18);
          *(undefined4 *)(lVar8 + 0x18) = 0;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear_26a6bec(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

