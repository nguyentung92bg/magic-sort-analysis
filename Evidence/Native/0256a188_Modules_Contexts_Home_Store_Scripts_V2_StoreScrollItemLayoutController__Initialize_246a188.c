/* IL2CPP: Modules.Contexts.Home.Store.Scripts.V2.StoreScrollItemLayoutController$$Initialize
void Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController__Initialize (Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Store.Scripts.V2.StoreScrollItemLayoutController$$Initialize
   void Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController__Initialize
   (Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController__Initialize_246a188
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_057de900;
  if ((bRam0000000005c2b0c4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577e478);
    FUN_012d0dc8(PTR_DAT_057cd598);
    FUN_012d0dc8(PTR_DAT_0575c340);
    FUN_012d0dc8(PTR_DAT_057de900);
    bRam0000000005c2b0c4 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_0575c340;
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_0577e478);
    *(long *)(param_1 + 0x20) = lVar5;
    FUN_012d0d74((long *)(param_1 + 0x20),lVar5);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar5 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_057cd598);
      plVar6 = (long *)(param_1 + 0x28);
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

